#include <stdio.h>
#include <string.h>

// Função para realizar a operação
double calculate(double a, double b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') {
        if (b == 0) {
            printf("Erro: Divisão por zero!\n");
            return 0;
        }
        return a / b;
    }
    return 0;
}

int main() {
    char input[100];
    double num1, num2, result;
    char op1, op2;

    printf("Digite a expressao (ex: 2 + 3 * 4): ");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = 0; // Remove nova linha

    // Extrai números e operadores (espera formato "num1 op1 num2 op2 num3")
    int read = sscanf(input, "%lf %c %lf %c %lf", &num1, &op1, &num2, &op2, &result);

    // Caso com apenas um operador (ex.: 2 + 3)
    if (read == 3) {
        result = calculate(num1, num2, op1);
        printf("Resultado: %.2f\n", result);
        return 0;
    }

    // Caso com dois operadores (ex.: 2 + 3 * 4)
    if (read == 5) {
        double temp;
        // Respeita precedência: * ou / antes de + ou -
        if (op2 == '*' || op2 == '/') {
            temp = calculate(num2, result, op2); // Calcula segundo operador primeiro
            result = calculate(num1, temp, op1); // Calcula primeiro operador depois
        } else {
            temp = calculate(num1, num2, op1); // Calcula primeiro operador
            result = calculate(temp, result, op2); // Calcula segundo operador
        }
        printf("Resultado: %.2f\n", result);
        return 0;
    }

    printf("Erro: Expressao invalida!\n");
    return 1;
}
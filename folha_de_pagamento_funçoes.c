#include <stdio.h>

// Funções para entrada de dados
float ler_valor(const char *mensagem) {
    float valor;
    printf("%s", mensagem);
    scanf("%f", &valor);
    return valor;
}

// Função para calcular INSS
float calcular_inss(float salario_base) {
    if (salario_base <= 1518)
        return salario_base * 0.075;
    else if (salario_base <= 2793.88)
        return salario_base * 0.09;
    else if (salario_base <= 4190.83)
        return salario_base * 0.12;
    else if (salario_base <= 8157.41)
        return salario_base * 0.14;
    else
        return 1142.03;
}

// Função para calcular IRPF
float calcular_irpf(float salario_base) {
    if (salario_base <= 2428.80)
        return 0;
    else if (salario_base <= 2826.65)
        return (salario_base * 0.075) - 182.16;
    else if (salario_base <= 3751.05)
        return (salario_base * 0.15) - 394.16;
    else if (salario_base <= 4664.68)
        return (salario_base * 0.225) - 675.49;
    else
        return (salario_base * 0.275) - 908.73;
}

// Função para calcular 13º salário
float calcular_decimo_terceiro(float salario_base, float meses_trabalhados) {
    return (salario_base / 12) * meses_trabalhados;
}

// Função para calcular FGTS
float calcular_fgts(float salario_base, float meses_trabalhados) {
    return (salario_base * 0.08) / meses_trabalhados;
}

// Função para calcular salário líquido
float calcular_salario_liquido(float salario_base, float inss, float irpf, float aux_alimentacao, float transporte) {
    return salario_base - inss - irpf - aux_alimentacao - transporte;
}

// Função para exibir os benefícios
void exibir_beneficio(const char *nome, float valor) {
    if (valor == 0)
        printf("Nao possui %s\n", nome);
    else
        printf("Valor do %s: R$%.2f\n", nome, valor);
}

// Função para classificar o salário
void classificar_salario(float salario_base) {
    if (salario_base == 1518)
        printf("\nVoce recebe um salario minimo");
    else if (salario_base > 1518)
        printf("\nVoce recebe mais que um salario minimo");
    else
        printf("\nProcesse a empresa, voce recebe menos que um salario minimo");
}

int main() {
    float salario_base, auxilio_alimentacao, transporte, meses_trabalhados;
    float inss, irpf, treze_salario, fgts, salario_liquido;

    // Leitura dos dados
    salario_base = ler_valor("Digite seu salario base: ");
    auxilio_alimentacao = ler_valor("Digite o valor do auxilio alimentacao, se nao possuir, digite 0: ");
    transporte = ler_valor("Digite o valor do auxilio transporte, se nao possuir, digite 0: ");
    meses_trabalhados = ler_valor("Digite o numero de meses trabalhados no ano: ");

    // Exibição de benefícios
    exibir_beneficio("auxilio transporte", transporte);
    exibir_beneficio("auxilio alimentacao", auxilio_alimentacao);

    // Classificação do salário
    classificar_salario(salario_base);

    // Cálculos
    inss = calcular_inss(salario_base);
    irpf = calcular_irpf(salario_base);
    treze_salario = calcular_decimo_terceiro(salario_base, meses_trabalhados);
    fgts = calcular_fgts(salario_base, meses_trabalhados);
    salario_liquido = calcular_salario_liquido(salario_base, inss, irpf, auxilio_alimentacao, transporte);

    // Saída dos resultados
    printf("\n\nQuantidade de meses trabalhados: %.0f", meses_trabalhados);
    printf("\nValor do salario bruto: R$%.2f", salario_base);
    printf("\nValor do 13º: R$%.2f", treze_salario);
    printf("\nValor do INSS: R$%.2f", inss);
    printf("\nValor do IRPF: R$%.2f", irpf);
    printf("\nValor do FGTS: R$%.2f", fgts);
    printf("\nValor do salario liquido: R$%.2f\n", salario_liquido);

    return 0;
}

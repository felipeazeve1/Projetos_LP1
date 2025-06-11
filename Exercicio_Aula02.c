#include <stdio.h>

int main() {
    
    printf("\n\t Adiçao: %i \n" , 500 + 200);
    printf("\n\t Subtração: %i \n" , 600 - 300);
    printf("\n\t Multiplicação: %i \n" , 500 * 4);
    printf("\n\t Divisão: %i \n" , 1000 / 5);
    printf("\n\t Modulo: %i \n" , 300 % 13);
    
    printf("\n\t Adiçao e Multiplicaçao sem parenteses: %i \n" , 15 + 20 * 2 );
    printf("\n\t Subtração e Divisao sem parenteses: %i \n" , 25 - 10 / 2);
    printf("\n\t Adiçao e Multiplicaçao com parenteses: %i \n" , (15 + 20) * 2);
    printf("\n\t Subtraçao e Divisao com parenteses: %i \n" , (25 - 10) / 3);
    printf("\n\t Tudo junto: %i \n" , (15 * 2) + (15 / 3) - 14 + 8 % 3);
    printf("\n\t Tudo junto 2: %i \n" , 12 + 26 / 15 * (35 % 2) - 42 * 8);
    
    
    return 0;
}

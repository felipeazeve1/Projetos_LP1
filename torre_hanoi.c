#include <stdio.h>

int hanoi(int n, char origem, char auxiliar, char destino) {
    if (n > 0) {
        // Move n-1 discos de origem para auxiliar, usando destino como auxiliar
        hanoi(n - 1, origem, destino, auxiliar);
        
        // Move o disco n de origem para destino
        printf("Mover disco %d de %c para %c\n", n, origem, destino);
        
        // Move n-1 discos de auxiliar para destino, usando origem como auxiliar
        hanoi(n - 1, auxiliar, origem, destino);
    }
    return 0; // Retorno apenas para cumprir a assinatura da função
}

int main() {

    printf("Resolvendo Torre de Hanoi com 3 discos:\n");
    hanoi(3, 'A', 'B', 'C');

    return 0;
}

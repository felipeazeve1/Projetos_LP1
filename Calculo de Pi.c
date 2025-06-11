#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    
    int total_pontos;
    printf("Digite o número de pontos: ");
    scanf("%d", &total_pontos);
    
    int pontos_no_circulo = 0;
    for (int i = 0; i < total_pontos; i++) {
        double x = (double)rand() / RAND_MAX * 2 - 1; // x entre -1 e 1
        double y = (double)rand() / RAND_MAX * 2 - 1; // y entre -1 e 1
        
        if (x * x + y * y <= 1) { // Verifica se o ponto está no círculo
            pontos_no_circulo++;
        }
    }
    
    double pi = 4.0 * pontos_no_circulo / total_pontos;
    printf("Estimativa de pi: %.6f\n", pi);
    
    return 0;
}
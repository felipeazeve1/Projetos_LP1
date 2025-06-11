#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COUNT 6
#define MAX_NUM 60

//So consegui fazer olhando na internet, me bati muito nesse exercicio. Mas achei interessante!

// Função para verificar se um número está em um array
int contains(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) return 1;
    }
    return 0;
}

// Função para obter 6 números do usuário
void get_user_numbers(int user_nums[]) {
    int num, count = 0;
    printf("Digite 6 números diferentes entre 1 e 60:\n");
    do {
        printf("Digite o %dº número: ", count + 1);
        if (scanf("%d", &num) != 1 || num < 1 || num > MAX_NUM || contains(user_nums, count, num)) {
            printf("Número inválido ou repetido! Tente novamente.\n");
            while (getchar() != '\n'); // Limpar buffer
            continue;
        }
        user_nums[count++] = num;
    } while (count < NUM_COUNT);
}

// Função para realizar um sorteio de 6 números
void perform_draw(int draw[]) {
    int temp[NUM_COUNT], count = 0;
    do {
        int num = rand() % MAX_NUM + 1;
        if (!contains(temp, count, num)) {
            temp[count++] = num;
        }
    } while (count < NUM_COUNT);
    // Copiar para o array de saída
    for (int i = 0; i < NUM_COUNT; i++) {
        draw[i] = temp[i];
    }
}

// Função para verificar se o sorteio acertou todos os números
int check_full_match(int user_nums[], int draw[]) {
    int matches = 0;
    for (int i = 0; i < NUM_COUNT; i++) {
        if (contains(user_nums, NUM_COUNT, draw[i])) {
            matches++;
        }
    }
    return matches == NUM_COUNT;
}

int main() {
    srand(time(NULL)); // Inicializar semente para números aleatórios

    int user_nums[NUM_COUNT] = {0};
    int contador_sorteios = 0;
    int sorteio[NUM_COUNT];

    // Obter números do usuário
    get_user_numbers(user_nums);
    printf("Seus números: ");
    for (int i = 0; i < NUM_COUNT; i++) {
        printf("%d ", user_nums[i]);
    }
    printf("\n");

    // Tentar adivinhar os números com sorteios
    do {
        contador_sorteios++;
        perform_draw(sorteio);

        // Exibir o sorteio
        printf("Sorteio %d: ", contador_sorteios);
        for (int i = 0; i < NUM_COUNT; i++) {
            printf("%d ", sorteio[i]);
        }

        // Verificar acertos
        int acertos = 0;
        for (int i = 0; i < NUM_COUNT; i++) {
            if (contains(user_nums, NUM_COUNT, sorteio[i])) {
                acertos++;
            }
        }
        printf(" - Acertos: %d\n", acertos);

    } while (!check_full_match(user_nums, sorteio));

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    printf("Números escolhidos: ");
    for (int i = 0; i < NUM_COUNT; i++) {
        printf("%d ", user_nums[i]);
    }
    printf("\nA máquina acertou todos os números no sorteio %d!\n", contador_sorteios);

    return 0;
}
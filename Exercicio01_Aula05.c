#include <stdio.h>

int main() {
	int i, j, k;

	// a. Contagem sequencial entre 0 e 10.000
	printf("\na. Contagem de 0 a 1000:\n");
	for(i = 0; i <= 10000; i++) {
		if(i <= 5 || i >= 9995) // Mostra apenas o inicio e o fim para evitar muitas linhas
			printf("%i ", i);
		if(i == 5)
			printf("... ");
	}

	//b. Contagem sequencial entre -10.000 e +10.000
	printf("\n\nb. Contagem entre -10.000 e +10.000:\n");
	for(i = -10000; i <= +10000; i++) {
		if(i <= -9995 || i >= 9997) // Mostra apenas o inicio e o fim para evitar muitas linhas
			printf("%i ", i);
		if(i == 9995)
			printf("... ");
	}

	//c. Contagem sequencial entre 0 e 10.000 dos numeros pares
	printf("\n\nc. Contagem entre 0 e 10.000 dos numeros pares:\n");
	for(i = 0; i <= 10000; i += 2) {
		if(i <= 12 || i >= 9992) // Mostra apenas o inicio e o fim para evitar muitas linhas
			printf("%i ", i);
		if(i == 12)
			printf("... ");
	}

	//d. Contagem sequencial entre 0 e 10.000 de numeros impares
	printf("\n\nd. Contagem entre 0 e 10.000 dos numeros impares:\n ");
	for(i = 1; i <= 10000; i += 2) {
		if(i <= 13 || i >= 9993 ) // Mostra apenas o inicio e o fim para evitar muitas linhas
			printf("%i ", i);
		if(i == 13)
			printf("... ");
	}

	// e. Contagem intervalada de 3 entre -100.000 e +100.000
	printf("\n\ne. Contagem com intervalo 3 de -100.000 a +100.000:\n");
	for (i = -100000; i <= 100000; i += 3) {
		if (i <= -99994 || i >= 99994) // Mostra apenas o inicio e o fim para evitar muitas linhas
			printf("%i ", i);
		if (i == -99994)
			printf("... ");
	}

	// f. Terceiro loop aninhado com contagem de iteraC'C5es
	printf("\n\nf. Loops aninhados:\n");
	int iter_i = 0, iter_j = 0, iter_k = 0, iter_total = 0;

	for(i = 0; i <= 5; i++ ) {
		iter_i++;
		for(j = 0; j <= 5; j++) {
			iter_j++;
			for(k = 0; k <= 5; k++) {
				iter_k++;
				iter_total++;
				if(iter_total <= 3 || iter_total >= 214) // Mostra apenas o inicio e o fim para evitar muitas linhas
					printf("i = %i , j = %i , k = %i\n", i, j, k);
				if(iter_total == 3)
					printf("...\n");
			}
		}
	}

	//i. Contagem de iteracoes de cada laco
	printf("\n\ni. Contagem de iteracoes de cada laco");
	printf("\ni. Iteracoes por laco:\n");
	printf("Loop i: %i iteracoes\n", iter_i);
	printf("Loop j: %i iteracoes\n", iter_j);
	printf("Loop k: %i iteracoes\n", iter_k);


	// ii. Contagem total de iteracoes
	printf("\nii. Total de iteracoes: %d\n", iter_total);




	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso = .0, altura = .0, imc = .0;


	printf("Entre com seu peso:");
	scanf("%f", &peso);

	printf("Entre com sua altura:");
	scanf("%f", &altura);

	printf("Seu peso = %3.2f e sua altura = %3.2f\n", peso, altura);

	imc = peso / (altura * altura);

	printf("Seu IMC = %3.2f\n", imc);


	if(imc < 18.5) {
		printf("Classificação IMC < 18.5 = Magreza\n");
	}
	else if(imc >= 18.5 && imc < 24.9) {
		printf("Classificação IMC = Normal\n");
	}
	else if(imc >= 25 && imc < 29.9) {
		printf("Classificação IMC = Sobrepeso\n");
	}
	else if(imc >= 30 && imc < 39.9) {
		printf("Classificação IMC = Obesidade\n");
	}
	else {
		printf("Classificação IMC = Obesidade grave\n");
	}

	system("pause");
	
}

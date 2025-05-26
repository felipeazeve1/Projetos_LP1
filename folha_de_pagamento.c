#include <stdio.h>

int main()
{	//Declaracao de variaveis
	float salario_base = .0, auxilio_alimentacao = .0, transporte = .0, meses_trabalhados = .0, treze_salario = .0 , inss = .0 , irpf = .0 ;
	float salario_liquido , fgts;

    //Entrada de dados do usuário
	printf("Digite seu salario base: ");
	scanf("%f", &salario_base);

	printf("Digite o valor do auxilio alimentacao, se nao possuir, digite 0: ");
	scanf("%f", &auxilio_alimentacao);

	printf("Digite o valor do auxilio transporte, se nao possuir, digite 0: ");
	scanf("%f", &transporte);

	printf("Digite o numero de meses trabalhados no ano: "); //Necessario para calcular o valor do 13º
	scanf("%f", &meses_trabalhados);


    // Condicoes auxilio transporte
	if(transporte == 0) {
		printf("\nNao possui auxilio transporte\n");
	}
	else {
		printf("\nValor do auxilio transporte: R$%3.2f\n", transporte);
	}

    // Condicoes auxilio alimentacao
	if(auxilio_alimentacao == 0) {
		printf("Nao possui auxilio alimentacao\n");
	}
	else {
		printf("Valor do auxilio alimentacao: R$%3.2f\n", auxilio_alimentacao);
	}

    // Condicoes salario base
	if(salario_base == 1518) {
		printf("\nVoce recebe um salario minimo");
	}
	else if(salario_base > 1518) {
		printf("\nVoce recebe mais que um salario minimo");
	}
	else {
		printf("\nProcesse a empresa, voce recebe menos que um salario minimo");
	}
	
	// Condicoes inss
	if(salario_base <= 1518){
	inss = salario_base * 0.075;
	}
	else if(salario_base >= 1518 && salario_base <= 2793.88) {
	    inss = salario_base * 0.09;
	}
	else if(salario_base >= 2793.89 && salario_base <= 4190.83){
	    inss = salario_base * 0.12;
	}
	else if(salario_base >= 4190.84 && salario_base <= 8157.41){
	    inss = salario_base * 0.14;
	}
	else{
	    inss = 1142.03; // Teto de contribuição
	}
	
	// Condicoes irpf
	if(salario_base <= 2428.80){
	    irpf = 0;
	}
	else if(salario_base >= 2428.81 && salario_base <= 2826.65 ){
	    irpf = (salario_base * 0.075) - 182.16;
	}
	else if(salario_base >= 2826.66 && salario_base <= 3751.05){
	    irpf = (salario_base * 0.15) - 394.16;
	}
	else if(salario_base >= 3751.06 && salario_base <= 4664.68){
	    irpf = (salario_base * 0.225) - 675.49;
	}
	else{
	    irpf = (salario_base * 0.275) - 908.73;
	}
	
    //Mostra a quantidade de meses trabalhados
	printf("\n\nQuantidade de meses trabalhados: %2.0f\n", meses_trabalhados);

    //Calculo do decimo terceiro
	treze_salario = (salario_base / 12) * meses_trabalhados;
	
	//Calculo do fgts 
	fgts = (salario_base * 0.08) / meses_trabalhados; // é descontado do salario bruto (base)
	
	//Saída dos valores
	printf("\nValor do salario bruto: R$%.2f", salario_base);
	printf("\nValor inss: R$%.2f" , inss);
	printf("\nValor do 13º: R$%.2f", treze_salario);
	printf("\nValor irpf: R$%.2f" , irpf);
	printf("\nValor do fgts: R$%.2f" , fgts);
	
	//Calculo salario liquido 
	salario_liquido = salario_base - inss - irpf - auxilio_alimentacao - transporte;
	printf("\nValor salario liquido : R$%.2f" , salario_liquido);
	
	



	return 0;
}

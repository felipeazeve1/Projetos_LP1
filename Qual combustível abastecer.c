#include <stdio.h>

int main(){
    //PARTE 1

//Declaracao de variaveis
float gasolina , etanol , razao_gas_et;

    //Entrada dos dados
    printf("Digite o valor da gasolina: ");
    scanf("%f" , &gasolina);
    printf("Digite o valor do etanol: ");
    scanf("%f" , &etanol);

    //Razao etanol/gasolina
    razao_gas_et = etanol / gasolina;

    printf("\nRazao Etanol/Gasolina: %.2f\n" , razao_gas_et);

    //Condicao para saber qual melhor combustivel
    if(razao_gas_et <= 0.7){
        printf("Melhor abastecer com etanol!\n");
    }
    else{
        printf("Melhor abastecer com gasolina!\n");
    }
    
    //PARTE 2

//
float pg, pe, pn, cg, ce, cn; 

    // Entrada de preços
    printf("\nDigite o preco gasolina: ");
    scanf("%f", &pg);
    printf("Digite o preco etanol: ");
    scanf("%f", &pe);
    printf("Digite o preco GNV caso haja (0 se nao usar): ");
    scanf("%f", &pn);

    // Entrada de consumos
    printf("Consumo gasolina (km/litro): ");
    scanf("%f", &cg);
    printf("Consumo etanol (km/litro): ");
    scanf("%f", &ce);
    if (pn > 0) {
        printf("Consumo GNV: ");
        scanf("%f", &cn);
    } else {
        cn = 0.0001; // Evita divisão por zero se GNV não for usado
    }

    // Calcula custo por km
    float custo_g = pg / cg;
    float custo_e = pe / ce;
    float custo_n = pn / cn;

    // Decisao do mais economico
    if (custo_g <= custo_e && custo_g <= custo_n) {
        printf("GASOLINA (R$%.2f/km)\n", custo_g);
    } else if (custo_e <= custo_g && custo_e <= custo_n) {
        printf("ETANOL (R$%.2f/km)\n", custo_e);
    } else {
        printf("GNV (R$%.2f/km)\n", custo_n);
    }



return 0;
}
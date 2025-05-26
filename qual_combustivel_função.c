#include <stdio.h>

// Função que calcula a razão etanol/gasolina
float calcular_razao(float etanol, float gasolina) {
    return etanol / gasolina;
}

// Função que calcula o custo por km
float calcular_custo_por_km(float preco, float consumo) {
    return preco / consumo;
}

// Função que lê um valor float
float ler_float(char texto[]) {
    float valor;
    printf("%s", texto);
    scanf("%f", &valor);
    return valor;
}

int main() {
    //PARTE 1 

    float gasolina = ler_float("Digite o valor da gasolina: ");
    float etanol = ler_float("Digite o valor do etanol: ");

    float razao = calcular_razao(etanol, gasolina);
    printf("\nRazao Etanol/Gasolina: %.2f\n", razao);

    if (razao <= 0.7) {
        printf("Melhor abastecer com etanol!\n");
    } else {
        printf("Melhor abastecer com gasolina!\n");
    }

    //PARTE 2 

    float pg = ler_float("\nDigite o preco gasolina: ");
    float pe = ler_float("Digite o preco etanol: ");
    float pn = ler_float("Digite o preco GNV caso haja (0 se nao usar): ");

    float cg = ler_float("Consumo gasolina (km/litro): ");
    float ce = ler_float("Consumo etanol (km/litro): ");
    float cn;

    if (pn > 0) {
        cn = ler_float("Consumo GNV (km/m³): ");
    } else {
        cn = 0.0001; // evita divisão por zero
    }

    float custo_g = calcular_custo_por_km(pg, cg);
    float custo_e = calcular_custo_por_km(pe, ce);
    float custo_n = calcular_custo_por_km(pn, cn);

    printf("\nCombustível mais econômico:\n");

    if (custo_g <= custo_e && custo_g <= custo_n) {
        printf("GASOLINA (R$%.2f/km)\n", custo_g);
    } else if (custo_e <= custo_g && custo_e <= custo_n) {
        printf("ETANOL (R$%.2f/km)\n", custo_e);
    } else {
        printf("GNV (R$%.2f/km)\n", custo_n);
    }

    return 0;
}

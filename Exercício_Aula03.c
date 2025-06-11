
#include <stdio.h>

int main()
{
    //int , apresenta valores inteiros (2 ou 4 bytes)
    int var_1 = 0 , var_2 = 0 , resp = 0;
    
    var_1 = 100;
    var_2 = 50;
    
    resp = var_1 * var_2;
    
    printf("Variavel inteira: %i\n" , resp);
    
   
    //float , valores com precisão (4 bytes)
    float div_1 = 0 , div_2 = 0 , div_result = 0;
    
    div_1 = 1050;
    div_2 = 50;
    
    div_result = div_1 / div_2;
    
    printf("Resultado divisão: %f \n" , div_result);
    
    
    //double , valores com precisão dupla (8 bytes)
    double db_1 = 0 , db_2 = 0 , db_3 = 0 , db_result = 0;
    
    db_1 = 35.1565;
    db_2 = 87.15461;
    db_3 = 123.1561;
    
    db_result = db_1 * db_2 - db_3;
    
    printf("Resultado double: %f \n" , db_result);
    
    
    //char , armazena caracteres (1 byte)
    char letra0 = 'F' , letra1 = 'E' , letra2 = 'L', letra3 = 'I' , letra4 = 'P' ,  ch_completo;
    
    ch_completo = letra0 + letra1 + letra2 + letra3 + letra4 + letra1;
    //Não consegui escrever meu nome, vi que tem outras formas de fazer isso, mas vou ficar so no que o senhor passou!
    
    printf("Resultado char: %c \n" , ch_completo);

    return 0;
}

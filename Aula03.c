#include <stdio.h>

int main()
{
    int var1 = 0;
    
    var1 = 100;
    
    printf("Variavel inteira: %i\n" , var1);
    
    var1 = var1 + 200;
    
    printf("Variavel inteira: %i\n" , var1);
    
    var1 = 100;
    
    var1 += 300;
    
    printf("Variavel inteira: %i\n" , var1);
    
    var1 = 200;
    
    var1++;
    
    printf("Variavel inteira: %i\n" , var1);
    
    var1 = 50;
    
    printf("Variavel inteira: %i\n" , var1++);
    printf("Variavel inteira: %i\n" , var1);
    
    var1 = 35;
    
    printf("Variavel inteira: %i\n" , ++var1);
    
    var1 = 80;
    
    var1++;
    
    printf("Variavel inteira: %li bytes\n" , sizeof(var1));

    return 0;
}
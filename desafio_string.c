#include <stdio.h>

//Desafio string

int main()
{
    char string[100]; // Limita em 100 caracteres
    char palavra[100];
    int length = 0; //Inicia a variável que calcula o tamanho da string
    
    // lê uma string
    printf("Digite uma frase: ");
    fgets(string , 100 , stdin); // lê a frase incluindo os espaços
    
    // Remove o \n do fgets para ter a contagem de caracteres da string
     while(string[length] != '\0' && string[length] != '\n'){
        length++;
    }
    if(string[length] == '\n'){
        string[length] = '\0'; //substitui \n por \0
    }
    
    // Tamanho da string
   printf("\nTamanho da string: %d\n" , length);
   
   // Apresenta a string completa
   printf("String completa: %s\n" , string);
   
   // Apresenta as palavras individualmente
    printf("Palavras individualmente:\n");
    int i = 0 , j = 0;
    while(i < length){
        while(string[i] == ' ' && i< length){ // ignora espaços no começo da frase
            i++;
        }
        if(i > length) // para quando chegar no final
        break;
        j = 0;
        while(string[i] != ' ' && string[i] != '\0' && i < length){
            palavra[j] = string[i];
            i++;
            j++;
        }
      palavra[j] = '\0'; // finaliza a palavra
      printf("%s\n" , palavra);
    }
  
  // Um caractere por linha
  printf("Caracteres individuais:\n");
  for(int i = 0; i < length; i++){
      printf("%c\n" , string[i]);
  }
 
   
   



    return 0;
}

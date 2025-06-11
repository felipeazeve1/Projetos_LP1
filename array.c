#include <stdio.h>

int main()
{
    //Simulando array bidimensional usando unidimensional
    int vec2[5 * 2];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            vec2[i * 5 + j] = i * 5 + j;
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            printf("%i " , vec2[i * 5 + j]);
        }
    }
    printf("\n");
    
    
    //Simulando tridimensional usando unidimensional
    int vec3[5 * 2 * 6] ;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 6; k++){
           vec3[i * 5 + j * k]  = i * 5 + j * k;
            }
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 6; k++){
            printf("%i " , vec3[i * 5 + j * k]);
            }
        }
    }
    printf("\n");
    
    
    //Multiplicação de matriz bidimensional
    
    int vec4[2][2] = {{1,2} , {3,4}}; // primeira matriz
    int vec5[2][2] = {{5,6} , {7,8}}; // segunda matriz
    int result[2][2]; // matriz resultado
    
    for(int i = 0; i < 2; i++){ // linha de vec4
        for(int j = 0; j < 2; j++){ // colunda de vec5
            result[i][j] = 0;
            for(int k = 0; k < 2; k++){ // colunas de vec4 / linhda de vec5
                result[i][j] += vec4[i][k] * vec5[k][j];
            }
        }
    }
    
    printf("\nMatriz 1\n");
    printf("%d %d\n" , vec4[0][0] , vec4[0][1]);
    printf("%d %d\n" , vec4[1][0] , vec4[1][1]);
    
    printf("\nMatriz 2\n");
    printf("%d %d\n" , vec5[0][0] , vec5[0][1]);
    printf("%d %d\n" , vec5[1][0] , vec5[1][1]);
    
     printf("\nResultado \n");
    printf("%d %d\n" , result[0][0] , result[0][1]);
    printf("%d %d\n" , result[1][0] , result[1][1]);

    
    
    

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
    
    int numero_casa, R1, R2, R3; 
    char nome_da_residencia [50];
    printf("Digite o nome da sua casa:");
    scanf("%s", nome_da_residencia);
    
    printf("Digite o numero da sua casa:");
    scanf("%d", &numero_casa);
    
    if (numero_casa >= 1 && numero_casa <= 15){
        printf("Sua casa será na rua 1°\n");
    }
    
    if (numero_casa >= 16  && numero_casa <= 25){
        printf("Sua casa será na rua 2°\n");
    }
    
    if (numero_casa >= 26 && numero_casa <= 35){
        printf("Sua casa será na rua 3°\n");
    }
    
    if (numero_casa % 2 == 0) {
        printf("Casa PAR ao lado direito\n");
    } else {
        printf("casa impar ao lado esquerdo\n");
    }
    
}
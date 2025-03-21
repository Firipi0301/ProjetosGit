#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // incluir a biblioteca para comparar strings

int main () {
    char dinheiro[10];

    printf("Do i have money? \n ");
    scanf("%3s", &dinheiro);

    if(strcmp( dinheiro, "yes") == 0) { // compara as strings corretamente 
        printf("I am goin travel to Disney");
    } else {
        printf("I am not goin travel to Disney");
    }
}
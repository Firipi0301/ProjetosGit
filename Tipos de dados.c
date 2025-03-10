#include <stdio.h>

int main () {
    // para usos de números inteiros usa-se int: 
    int my_age = 22; 
    // para numeros com virgulas/pontos usa-se float:
    float my_size = 1.75;
    // para caracter usamos char:
    char my_letter = 'L';

    printf("This is my age: %d\n", my_age);
    printf("This is my size: %.2f\n", my_size);
    printf("This is my Letter: %c\n", my_letter);

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
  int n1, n2, soma; 
  float media;
  char nome[100]; 

  printf("Digite seu nome: ", nome);
  scanf("%s", &nome);
 
  printf("Digite o seu n�mero 1: ", n1);
  scanf("%d",&n1);

  printf("Digite o seu n�mero 2: ", n2);
  scanf("%d",&n2);

  soma = n1 + n2;
  media = (n1 + n2)/2;


  printf("o resultado entre %d e %d � igual a: %d\n",n1, n2, soma);
  printf("e o resultado da media � : %f\n ", media);
}
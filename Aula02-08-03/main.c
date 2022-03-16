#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int a;
  int resto;
  int inicio;
  int fim;

  inicio = 50;
  fim = 678;

  a = inicio;
  //printf("%d", "jean" == "Jean");


  int b = 9;
  int qtd = 0;
  while(a <= fim) {
    resto = a % b;
    //printf("o resto de %d / %d vale %d \n ",a, b, resto);
    if (resto == 0) {
      printf("%d é multiplo de %d \n", a, b);
      qtd = qtd = 1;
    }
    a = a + 1;

  }


  return 0;
}

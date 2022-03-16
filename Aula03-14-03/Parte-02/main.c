#include <stdio.h>

int main(void) {
  
  int valor = 11;
  printf(" O printf de fora: Informe um número entre 2 e 10: ");
  scanf("%d", &valor);
  while (valor < 2 || valor > 10) {
    printf(" O printf de dentro: Informe um número entre 2 e 10: ");
    scanf("%d", &valor);
    
  }
  if(valor > 5){
  printf("\n\n %d é maior que cinco \n\n", valor);
  };
  if(valor < 5){
  printf("\n\n %d é menor que cinco \n\n", valor);
  };
  return 0;
}
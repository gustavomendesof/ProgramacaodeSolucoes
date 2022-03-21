/*
Exercício 9 
Desenvolver um algoritmo para ler o nome, idade e peso de três pessoas. Calcular e imprimir idade e o peso médio das três pessoas. 
*/

#include <stdio.h>

int main(void) {
  int idade1, idade2, idade3, idade_media;
  float peso1, peso2, peso3, peso_medio;

  printf("Digite a idade da primeira pessoa: ");
  scanf("%i", &idade1);

  printf("Digite o pesso da primeira pesso: ");
  scanf("%f", &peso1);

  printf("Digite a idade da segunda pessoa: ");
  scanf("%i", &idade2);

  printf("Digite o pesso da segunda pesso: ");
  scanf("%f", &peso2);

  printf("Digite a idade da terceira pessoa: ");
  scanf("%i", &idade3);

  printf("Digite o pesso da terceira pesso: ");
  scanf("%f", &peso3);

  idade_media = idade1 + idade2 + idade3;
  peso_medio = peso1 + peso2 + peso3 / 3;

  printf("A media de idade das 3 pessoas é: %i\n", idade_media);
  printf("O peso medio das 3 pessoas è: %f", peso_medio);
  
  return 0;
}

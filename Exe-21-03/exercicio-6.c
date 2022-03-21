/*
O coração humano bate em média uma vez por segundo. Desenvolver um programa para calcular e escrever quantas vezes o coração de uma pessoa baterá se viver X anos. 
*/

#include <stdio.h>

int main(void) {
  float coracao = 60, res;
  int ano;
 
  res = (coracao*24)*365;

  printf("Quantos anos o paciente possui quantos anos: ");
  scanf("%i", &ano);

  res = res * ano;

  printf("O coração bateu %.0f em %i anos", res, ano);
  
  return 0;
}

/*
Exercício 10 
Fazer um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a apenas em dias. 
*/

#include <stdio.h>

int main(void) {
  float idade, ano, meses, dias, cont;

  printf("Qunatos anos tem a pessoa: ");
  scanf("%f", &ano);

  dias = ano * 365;

  meses = (ano * 365)/12;
  
  printf("A pessoa vive a %.0f meses e %.0f dias", meses, dias);

  
  return 0;
}

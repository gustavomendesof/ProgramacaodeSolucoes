/*
Crie um programa que leia o número de horas trabalhadas no mês e o valor da hora. O programa deverá imprimir o salário que o funcionário deverá receber, calculando o desconto de 6% do vale transporte do funcionário. 
*/

#include <stdio.h>

int main(void) {
  float hora, valor, perc, resultado, desc;
  printf("Digite as horas trabalhadas: ");
  scanf("%f", &hora);

  printf("Digite o valor da ora: ");
  scanf("%f", &valor);

  printf("Digite a porcentagem de desconto do transporte: ");
  scanf("%f", &perc);

  resultado = (valor * hora);
  
  printf("O salario bruto final: %f\n", resultado);

  desc = resultado * perc;

  printf("O salario liquido final: %f", desc);
  
  return 0;
}

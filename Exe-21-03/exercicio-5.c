/*
Escreva um programa para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. 
*/

#include <stdio.h>

int main(void) {
  float salario, perc, res_perc, resultado;

  printf("Digitie o salario atual do funcionario: ");
  scanf("%f", &salario);

  printf("Digite o percentual a aumentar o salario: ");
  scanf("%f", &perc);

  res_perc = salario * perc;

  resultado = salario + res_perc;

  printf("Novo Salario é: %f", resultado);  
  return 0;
}

/*
Crie um programa que leia o valor do dólar e faça a conversão em reais. O usuário deverá inserir o valor da cotação atual do dólar (em reais) e o valor do produto (em dólar). O programa deverá imprimir o valor em reais. 
*/

#include <stdio.h>

int main(void) {
  float dolar, produto, valor;
  printf("Digite o valor do dolar: ");
  scanf("%f", &dolar);

  printf("Digite o valor do produto: ");
  scanf("%f", &produto);

  valor = produto * dolar;
  
  printf("O valor do seu produto é: %f\n", valor);
  return 0;
}

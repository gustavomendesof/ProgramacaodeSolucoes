/*
Crie um programa que leia dois números inteiros e imprima a soma.
*/
#include <stdio.h>

int main(void) {
  int num1 = 3, num2 = 5;
  int soma = 0;

  soma = num1 + num2;
  
  printf("A soma de %d e %d é: %d\n", num1, num2, soma);
  return 0;
}


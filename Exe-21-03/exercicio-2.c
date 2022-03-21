/*
Crie um programa que leia 3 números e faça a média entre eles. Após o cálculo, imprima o valor na tela. 
*/
#include <stdio.h>

int main(void) {
  int num1 = 3, num2 = 5, num3 = 8;
  int media = 0;

  media = (num1 + num2 + num3) / 3;
  
  printf("A media dos numeros é: %d\n", media);
  return 0;
}

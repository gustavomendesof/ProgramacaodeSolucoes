/*
Exercício 8 
Faça um programa para executar as seguintes conversões: – Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius C=(5F-160)/9. – Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm). 
Declare uma constante para valor de 1 polegada em mm (#define milimetro_pol 25.4) 

*/

#include <stdio.h>

int main(void) {
  float fah, celcius, qnt_chuva, mili_pol;

  printf("Digite a temperatura em fahrenheit: ");
  scanf("%f", &fah);

  printf("Digite a quantidade de chuva em polegadas: ");
  scanf("%f", &mili_pol);

  #define mili_pol 25.4;

  qnt_chuva = mili_pol;
  
  celcius = ((5*fah)-160)/9;

  printf("Temperatura em celcius: %f\n", celcius);
  printf("Quantidade de chuva: %f", qnt_chuva);
  

  return 0;
}

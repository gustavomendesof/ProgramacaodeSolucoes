/*
Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata cilíndrica de alumínio, sabendo-se que o custo do alumínio por m² é R$ 100,00. Leia o raio e a altura e escreva o valor do custo. Declare uma constante para o valor de PI e outra para o valor do metro quadrado. 
*/

#include <stdio.h>

int main(void) {
  float metro, raio, altura, pi = 3.14;
  float area_base, area_altura, area_total, volume;

  printf("Qual o raio da lata: ");
  scanf("%f", &raio);

  printf("Qual e a altura da lata: ");
  scanf("%f", &altura);

  volume = pi * (( raio * raio) * altura);

  area_total = volume / altura;

  metro = area_total * 100;
  
  printf("O custo da lata sera de %.0f", metro);

  return 0;
}

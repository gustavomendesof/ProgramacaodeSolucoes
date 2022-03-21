/*
Exercício 12 
Uma autolocadora aluga seus carros com uma taxa fixa por dia, uma taxa por Km rodado e desconto de 10% na taxa fixa de aluguel por dia. Escrever um algoritmo que lê a taxa fixa por dia, a taxa por Km rodado, o número de dias, o número de quilômetro rodado e calcular e escrever o valor total do aluguel, o valor do desconto, o número de dias, e a quilometragem rodada.
*/

#include <stdio.h>

int main(void) {
  float taxa_fixa, taxa_dia, taxa_km, dia, km, total, total_dia, total_km, desc;

  printf("Qual a taxa fixa do aluguel: ");
  scanf("%f", &taxa_fixa);

  printf("Qual a taxa do dia de aluguel: ");
  scanf("%f", &taxa_dia);
  
  printf("Qual a taxa de Km do aluguel: ");
  scanf("%f", &taxa_km);
  
  printf("Quantos dias ficou locado: ");
  scanf("%f", &dia);

  printf("Quantos Km rodados: ");
  scanf("%f", &km);

  desc = taxa_fixa * 0.10;
  total_dia = taxa_dia * dia;
  total_km = taxa_km * km;
  total = (taxa_fixa + total_dia + total_km) - desc;

  printf("Total de Km rodados %.0f e o valor total de km R$%.2f \n", km, total_km);
  printf("Total de dias locados %.0f e o valor total dos dias R$%.2f \n", dia, total_dia);
  printf("Total de desconto R$%2.f\n", desc);
  printf("Valor total do aluguel: R$%.2f", total);
  
  return 0;
}
 
 

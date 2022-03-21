/*
Exercício 11 
Escrever um algoritmo que lê o público total de futebol e fornecer a renda do jogo, sabendo-se que havia 4 tipos de ingressos assim distribuídos: popular 10% a R$1,00, geral 50% a R$5,00, arquibancada 30% a R$10,00 e cadeiras 10% a R$ 20,00. 
*/

#include <stdio.h>

int main(void) {
  float publi, popular, geral, arqui, cadeira, total;

  printf("Qual foi o total de publico: ");
  scanf("%f", &publi);

  popular = (publi * 0.10);
  geral = (publi * 0.50) * 5;
  arqui = (publi * 0.30) * 10;
  cadeira = (publi * 0.10) * 20;

  total = popular + geral + arqui + cadeira;

  printf("Total no popular: R$ %.2f \n", popular);
  printf("Total na geral: R$ %.2f \n", geral);
  printf("Total nas arquibancada: R$ %.2f \n", arqui);
  printf("Total nas cadeiras: R$ %.2f \n", cadeira);
  printf("Total de ingressos: R$ %.2f", total);
  
  return 0;
} 

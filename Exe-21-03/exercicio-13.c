/*
Exercício 13 
Escrever um algoritmo que lê a taxa de consumo de potência elétrica de um refrigerador, o tempo em horas que permaneceu ligado e o valor do quilowatt hora e calcular e escrever a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica.
*/

#include <stdio.h>

int main(void) {
  float taxa_con, hora, valor_quilo, energia_total, valor;

  printf("Taxa de consumo: ");
  scanf("%f", &taxa_con);
  
  printf("Quantidade de horas ligado: ");
  scanf("%f", &hora);
  
  printf("Qual o valor da quilowatt hora: ");
  scanf("%f", &valor_quilo);
  
  energia_total = taxa_con * hora;
  valor = energia_total * valor_quilo;

  printf("Consumo total do refrigerador foi: %.0f\n", energia_total);
  printf("Total a pagar: R$%.2f", valor);
  
  return 0;
}


#include <stdio.h>

int main(void) {
  printf("informe o valor\n");
  int valor;
  scanf("%d", &valor);
  printf("informe o percentual\n");
  int perc;
  scanf("%d", &perc);

  float idx = perc / 100.0;

  printf("%5.2f", idx * valor);
  return 0;
}
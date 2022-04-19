#include <stdio.h>

int main() {
  int x;
  int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  float m = x/y;
  printf("A multiplicacao de %d por %d eh igual a %f\n", x, y, m);
}
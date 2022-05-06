#include <stdio.h>

int main(x, y)
{
  float x;
  float y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  float m = x / y;
  printf("A multiplicacao de %f por %f eh igual a %f\n", x, y, m);
}
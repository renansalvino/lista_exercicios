#include <stdio.h>

int main(void)
{
  double num1,
      num2,
      num3,
      num4,
      num5,
      media;

  printf("Insira os números para realizar a média aritmética: \n");
  scanf("%2lf %2lf %2lf %2lf %2lf", &num1, &num2, &num3, &num4, &num5);
  media =  (num1 + num2 + num3 + num4 + num5) / 5;
  printf("A média arítmética dos números inseridos é: %.2lf\n", media );
}
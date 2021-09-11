#include <stdio.h>

int main(void)
{
  double f_con,
      c_con,
      f,
      c;

  printf("Insiria sua temperatura em celsius: ");
  scanf("%2lf", &c);
  printf("Temperatura em celsius inserida: %f", c);
  printf("\n");
  printf("Insira sua temperatura em Fahrenheit: ");
  scanf("%2lf", &f);
  printf("Temperatura em Fahrenheit inserida: %f", f);
  printf("\n");

  printf("Convertendo as temperaturas!\n");
  f_con = f;
  c_con = c;

  f = ((9 * c_con) / 5) + 32;
  c = 5 * (f_con - 32) / 9;
  printf("Temperatura em Fahrenheit convertida para Celsius: %f\n", c);
  printf("Temperatura em Celsius convertida para Fahrenheit: %f\n", f);
}
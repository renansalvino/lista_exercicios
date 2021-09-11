#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int uni, mil, cen, dez;
  char milhares[4][5] = {"", "M", "MM", "MMM"};
  char centenas[10][5] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  char dezenas[10][5] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  char unidades[10][5] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
  printf("digite o numero que deseja converter : ");
  scanf("%d", &uni);
  dez = cen = mil = 0;
  if (uni <= 3999)
  {
    if (uni >= 1000)
    {
      mil = uni - (uni % 1000);
      mil = mil / 1000;
      uni = uni % 1000;
    }

    if (uni >= 100)
    {
      cen = uni - (uni % 100);
      cen = cen / 100;
      uni = uni % 100;
    }

    if (uni >= 10)
    {
      dez = uni - (uni % 10);
      dez = dez / 10;
      uni = uni % 10;
    }
    printf("correspondente romano:%s%s%s%s", milhares[mil], centenas[cen], dezenas[dez], unidades[uni]);
  }
  else
    printf("numero invalido\n");
}
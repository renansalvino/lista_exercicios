#include <stdio.h>
int main()
{
  int a, s, i;
  scanf("%d", &a);
  s = 100;
  i = 19;
  while (s < a)
  {
    s -= i;
    i -= 2;
  }
  printf("%d\n", s);
  return 0;
}

//Meu RA é 254352, então inseri os números 52 e teve como resultado o número 100

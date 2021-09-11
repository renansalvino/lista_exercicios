#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//   int saque;
//   int notas[5] = {1, 5, 10, 50, 100};
//   int i;
//   printf("Quanto deseja sacar? ");
//   scanf("%d reais", &saque);

//   if (saque != 0)
//   {
//     while (saque >= 100)
//     {
//       printf("tirou %d notas de %d\n", i, notas[4]);
//       saque -= 100;
//     }
//     while (saque >= 50)
//     {
//       printf("tirou %d\n", notas[3]);
//       saque -= 50;
//     }
//     while (saque >= 10)
//     {
//       printf("tirou %d\n", notas[2]);
//       saque -= 10;
//     }
//     while (saque >= 5)
//     {
//       printf("tirou %d\n", notas[1]);
//       saque -= 5;
//     }
//     while (saque >= 1)
//     {
//       printf("tirou %d\n", notas[0]);
//       saque -= 1;
//     }
//   }
//   else
//   {
//     printf("Não tem dinheiro!!!");
//   }
//   printf("Esse aqui é o saldo %d\n", saque);
// }

int main(void)
{
  int ent, count , cem, cinquenta, dez, uni;
  cem = cinquenta =dez = uni = 0;
  printf("Qual valor deseja sacar? ");
  scanf("%d", &ent);
  if (ent >= 100)
  {
    count  = ent - (ent % 100);
    cem = count  / 100;
    ent = ent % 100;
  }
  if (ent >= 50)
  {
    count  = ent - (ent % 50);
    cinquenta = count  / 50;
    ent = ent % 50;
  }
  if (ent >= 10)
  {
    count  = ent - (ent % 10);
    dez = count  / 10;
    ent = ent % 10;
  }
  if (ent >= 5)
  {
    count  = ent - (ent % 5);
    uni = count  / 5;
    ent = ent % 5;
  }

  printf("%d nota(s), de R$100\n", cem);
  printf("%d nota(s), de R$50\n", cinquenta);
  printf("%d nota(s), de R$10\n", dez);
  printf("%d nota(s), de R$5\n", uni);
  printf("%d nota(s), de R$1\n", ent);
}
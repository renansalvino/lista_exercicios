#include <stdio.h>
int main()
{
  int opcao, escolha;

  do
  {

    printf("Lista:\n");
    printf("(1)Dorflex\n");
    printf("(2)Coca-Cola\n");
    printf("(3)Malbec\n");
    printf("(4)Boneca\n");
    printf("(5)Chip da Oi\n");
    scanf("%d", &opcao);

    escolha = 0;
    switch (opcao)
    {
    case 1:
      printf("Categoria Remédios - desconto de 30%%\n");
      break;
    case 2:
      printf("Categoria Alimentação - desconto de 15%%\n");
      break;
    case 3:
      printf("Categoria Perfumaria – desconto de 10%%\n");
      break;
    case 4:
      printf("Categoria Brinquedos – desconto de 07%%\n");
      break;
    case 5:
      printf("Produto sem desconto – 0%%\n");
      printf("Gostaria de escolher outro produto? Sim(1)/Não(0)");
      scanf("%d", &escolha);
      break;
    default:
      printf("Código Inválido\n");
      break;
    }

  } while (escolha != 0);
}
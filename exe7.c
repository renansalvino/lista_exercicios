#include <stdio.h>
int main()
{
  int a, b, resultado;
  scanf("%d %d", &a, &b);
  if (((a && b) || a) && ((!a && b) || !b))
    printf("Expressao verdadeira\n");
  else
    printf("Expressao falsa\n");
  return 0;
} 

//Nesse exercício, apenas o valor "1 0" consta como uma expressão verdadeira, o resto a exceção consta como falsa!!!
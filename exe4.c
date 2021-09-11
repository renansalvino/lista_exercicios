// 4 - Escreva um programa que leia o raio de uma circunferência e imprima sua área.
#include <math.h>
#include <stdio.h>

int main (void) {
  float raio;
  float area;
  printf("Insira aqui o raio da circuferência: ");
  scanf("%2e", &raio);
  printf("\n");
  area = 3.14 * pow(raio,2);
  printf("A área baseada no raio que inseriu é: %2f\n", area);
}
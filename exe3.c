// 3 - Escreva um programa que leia um valor de velocidade em quilômetros por hora e imprima este
// valor em metros por segundo.

#include <stdio.h>

int main (void) {
  float quilometros;
  float metros;
  printf("Insira aqui a velocidade em KM/H: ");
  scanf("%f", &quilometros);
  
  metros = quilometros / 3.6;
  printf("Sua velocidade em metros é: %.4f\n", metros);
}
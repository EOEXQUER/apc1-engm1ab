/*
1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/
#include <stdio.h>

int main() {
  float A1;
  float A2;

  A1 = 0.0f;
  A2 = 10.0f;

float media = (0.4 * A1) + (0.6 * A2);
  printf("A media final eh %f\n", media);

  return 0;
}
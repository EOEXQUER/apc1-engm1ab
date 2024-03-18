/*
9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>
#include <math.h>

int main() {
 float anos;
  float meses;
  float dias;
  float idade;

  anos = 3.0f;
  meses = 6.0f;
  dias = 30.0f;
  idade = anos * 365 + meses * 30 + dias;

  printf("A idade em dias eh %f\n", idade);
  
  return 0;
}
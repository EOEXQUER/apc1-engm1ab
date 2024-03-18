/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>

int main() {
  float raio;
  float pi;

  raio = 4.0f;
  pi = 3.1416f;

  float perimetro = 2 * pi * raio;
  printf("O perimetro da pizza eh %f\n", perimetro);
  return 0;
}
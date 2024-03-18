/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/
#include <stdio.h>
#include <math.h>

int main() {
  float a;
  float b;
  float c;

  a = 1.0f;
  b = 2.0f;
  c = 1.0f;

  float delta = b * b - 4 * a * c;
  float raiz_delta = sqrt(delta);
  float x1 = (-b + raiz_delta) / (2 * a);
  float x2 = (-b - raiz_delta) / (2 * a);
  printf("O valor de delta eh %f\n", delta);
  
  return 0;
}

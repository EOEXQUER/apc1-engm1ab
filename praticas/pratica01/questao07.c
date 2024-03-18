/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
  */
#include <stdio.h>
#include <math.h>

int main() {
  float distancia;
  float angulo;
  float altura;

  distancia = 100.0f;
  angulo = 45.0f;
  altura = sin(angulo) * distancia;
  printf("A altura alcançada pelo avião eh %f\n", altura);
  
  return 0;
}
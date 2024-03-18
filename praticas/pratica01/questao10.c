/*
10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
  */
#include <stdio.h>
#include <math.h>

int main() {
 float numero;
  float unidade;
  float dezena;
  float centena;
  float milhar;
  
  numero = 5637.0f;
  unidade = numero % 10;
  dezena = (numero / 10) % 10;
  centena = (numero / 100) % 10;
  milhar = (numero / 1000) % 10;

  printf("O valor em unidade eh %f\n", unidade);
  
  return 0;
}
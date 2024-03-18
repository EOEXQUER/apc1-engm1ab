/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/
#include <stdio.h>
#include <math.h>

int main() {
  float segundos;
  float horas;
  float minutos;

  segundos = 1000.0f;
  horas = segundos / 3600.0f;
  minutos = segundos / 60.0f;

  printf("O valor em horas eh %f\n", horas);
  
  return 0;
}
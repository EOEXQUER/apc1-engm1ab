/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
  */
#include <stdio.h>

int main() {
float gigabytes;

  gigabytes = 5.0f;

  float bytes = gigabytes * 1024 * 1024 * 1024;

  printf("O valor em bytes eh %f\n", bytes);
  
  return 0;
}

/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
  */
#include <stdio.h>
#include <math.h>

int main() {
 float numero1;
 float numero2;
 float quociente;
 float resto;
  
 printf("Entre com o primeiro numero: ");
 int deu_certo = scanf("%f", &numero1);

 printf("Entre com o segundo numero: ");
 deu_certo = scanf("%f", &numero2);

 printf("Entre com o quociente");
 deu_certo = scanf("%f", &quociente);

 printf("Entre com o resto");
 deu_certo = scanf( "%f", &resto);

 

 
  
  return 0;
}
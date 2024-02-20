#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ranaSaltarina(int* X, int* Y, int* D);

int main(void) {
   int a = 5;
   int b = 80;
   int c = 20;
   int result = 0;
   int result1 = 0;
   result = ranaSaltarina(&a, &b, &c);
   result1 = rangoRango(a, b, c);
  

   printf("Resultado: %d\n" , result);
   
   
}

int ranaSaltarina(int* X, int* Y, int* D){

   int temp = 0;
   int acumulador=0;
       temp = *X;
   for(int i=0;temp<*Y;i++){
     
      temp = temp + *D;
      acumulador++;
   }
  return acumulador;
}


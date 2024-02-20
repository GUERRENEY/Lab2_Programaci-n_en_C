#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int rangoRango(int A,int B, int C);

int main(void) {
   int a = 5;
   int b = 80;
   int c = 20;

   int result1 = 0;
   
   result1 = rangoRango(a, b, c);
  
   //printf("Resultado: %d\n" , result1);
   serieFibonacci();
}



int rangoRango(int A,int B, int K){
  
  int contador=0;
  
  for(int i=A;i<=B;i++){
    if(A%K==0){
      contador++;
    }
    A++;
  }

  return contador;
}




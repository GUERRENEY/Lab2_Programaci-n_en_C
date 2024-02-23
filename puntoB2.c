#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Se define la variabale a usar
int rangoRango(int A,int B, int C);

int main(void) {
   int a = 5;
   int b = 80;
   int c = 20;

   int result1 = 0;
   
   result1 = rangoRango(a, b, c);
}


// esta funcion cuenta cuantos numeros hay entre A y B tomandolos a ellos dentro del rango tambien
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




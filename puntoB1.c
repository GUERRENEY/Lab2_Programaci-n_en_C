#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Se define la función  con punteros como parametros
int ranaSaltarina(int* X, int* Y, int* D);

int main(void) {
   int a = 5; //Se empieza en una distancia de 5
   int b = 80; //Elobjetivo es llegar a 80 0 mas
   int c = 20; //En pasos de 20 se llegara a la meta
   int result = 0;
   result = ranaSaltarina(&a, &b, &c);
  

   printf("Resultado: %d\n" , result);
   
   
}

//Se desarrolla la función ranaSaltarina 
int ranaSaltarina(int* X, int* Y, int* D){

   int temp = 0;
   int acumulador=0;
       temp = *X; // temmp guarda inicialmente el valor de 5 
   for(int i=0;temp<*Y;i++){
     
      temp = temp + *D; //luego lo suma por una unica vez con D que es 20 y luego solo va a sumar lo reccorrido con 20
      acumulador++;
   }
  return acumulador;
}


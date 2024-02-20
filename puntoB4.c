#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void serieFibonacci();
int main(void) {
   int a = 5;
   int b = 80;
   int c = 20;
   
   serieFibonacci();
}


void serieFibonacci(){

  ulong a=0;
  ulong b=0;
  ulong c=0;
  printf("%lu\n" ,c);
  c=1;
  for(uint i=0;i<=500;i++){
    
    printf("%lu\n" ,c);
    a = b + c;
    b=c;
    c=a;
    
    
  }
}


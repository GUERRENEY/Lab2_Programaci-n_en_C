#include <stdio.h>

#define MAX 1000 // Aumenta si es necesario para más dígitos

// Función para sumar dos números grandes almacenados en arreglos
void suma(int *a, int *b, int *c) {
    int acarreo = 0;
    for (int i = 0; i < MAX; i++) {
        c[i] = a[i] + b[i] + acarreo;
        acarreo = c[i] / 10;
        c[i] %= 10;
    }
}

// Función para copiar el segundo arreglo en el primero
void copia(int *destino, int *fuente) {
    for (int i = 0; i < MAX; i++) {
        destino[i] = fuente[i];
    }
}

// Función para imprimir un número grande
void imprime(int *num) {
    int inicio = MAX - 1;
    while (inicio > 0 && num[inicio] == 0) inicio--; // Ignorar ceros a la izquierda
    for (int i = inicio; i >= 0; i--) {
        printf("%d", num[i]);
    }
    printf("\n");
}

int main() {
    int a[MAX] = {0}, b[MAX] = {0}, resultado[MAX];
    a[0] = 1; // Inicializa el primer número de Fibonacci
    b[0] = 1; // Inicializa el segundo número de Fibonacci

    printf("Fibonacci 1: 1\nFibonacci 2: 1\n");
    for (int i = 3; i <= 500; i++) {
        suma(a, b, resultado); // Suma los dos últimos números
        copia(a, b); // Prepara para el siguiente cálculo
        copia(b, resultado); // Almacena el último resultado
        printf("Fibonacci %d: ", i);
        imprime(resultado);
    }
    return 0;
}


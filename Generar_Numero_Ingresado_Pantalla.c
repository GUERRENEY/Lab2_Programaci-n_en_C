#include <stdio.h>

// Función para imprimir el número en la pantalla como una pantalla de cristal líquido
void imprimir_en_LCD(int numero, char *figuras[]) {
    int digitos[3]; // Array para almacenar los dígitos del número
    int i;

    // Almacenar los dígitos del número en el arreglo
    for (i = 0; i < 3; i++) {
        digitos[i] = numero % 10;
        numero /= 10;
    }

    // Imprimir los dígitos en orden inverso
    for (i = 2; i >= 0; i--) {
        printf("%s", figuras[digitos[i]]);
    }
}

int main() {
    // Definir las figuras para cada dígito del 0 al 9
    char *figuras[] = {
        " --- \n|   |\n|   |\n|   |\n --- \n",
        "  |  \n  |  \n  |  \n  |  \n --- \n",
        " --- \n    |\n --- \n|    \n --- \n",
        " --- \n    |\n --- \n    |\n --- \n",
        "|   |\n|   |\n --- \n    |\n    |\n",
        " --- \n|    \n --- \n    |\n --- \n",
        " --- \n|    \n --- \n|   |\n --- \n",
        "---  \n   | \n  |  \n |   \n|    \n",
        " --- \n|   |\n --- \n|   |\n --- \n",
        " --- \n|   |\n|---|\n    |\n --- \n"
    };

    int digito_1, digito_2, digito_3;
    int numero;

    // Solicitar al usuario que ingrese cada dígito del número
    do {
        printf("Ingrese el primer dígito (0-9): ");
        scanf("%d", &digito_1);
        if (digito_1 < 0 || digito_1 > 9)
            printf("Error: El número debe estar en el rango de 0 a 9.\n");
    } while (digito_1 < 0 || digito_1 > 9);

    do {
        printf("Ingrese el segundo dígito (0-9): ");
        scanf("%d", &digito_2);
        if (digito_2 < 0 || digito_2 > 9)
            printf("Error: El número debe estar en el rango de 0 a 9.\n");
    } while (digito_2 < 0 || digito_2 > 9);

    do {
        printf("Ingrese el tercer dígito (0-9): ");
        scanf("%d", &digito_3);
        if (digito_3 < 0 || digito_3 > 9)
            printf("Error: El número debe estar en el rango de 0 a 9.\n");
    } while (digito_3 < 0 || digito_3 > 9);

    // Construir el número a partir de los dígitos ingresados
    numero = digito_1 * 100 + digito_2 * 10 + digito_3;

    // Imprimir el número como una pantalla de cristal líquido
    imprimir_en_LCD(numero, figuras);

    printf("\n");

    return 0;
}
/* CODIGO Numeros primos Uriel Zuniga Abril01 */

#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin, contador = 0;

    // Pedimos al usuario el intervalo
    printf("Introduce el valor inicial del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el valor final del intervalo: ");
    scanf("%d", &fin);

    // Verificamos que el intervalo no tenga más de 100 números primos
    while (1) {
        contador = 0;
        printf("Los números primos entre %d y %d son:\n", inicio, fin);
        for (int i = inicio; i <= fin; i++) {
            if (esPrimo(i)) {
                contador++;
            }
        }

        // Si hay más de 100 números primos, pedir un nuevo intervalo
        if (contador > 100) {
            printf("El intervalo tiene más de 100 números primos. Introduce un nuevo intervalo.\n");
            printf("Introduce el valor inicial del intervalo: ");
            scanf("%d", &inicio);
            printf("Introduce el valor final del intervalo: ");
            scanf("%d", &fin);
        } else {
            break; 
        }
    }

    // Imprimir los números primos en renglones de 20 números
    int imprimidos = 0;
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
            imprimidos++;
            if (imprimidos % 20 == 0) { 
                printf("\n");
            }
        }
    }

    // Si no hay más de 100 números primos, imprimir un salto de línea al final
    if (imprimidos % 20 != 0) {
        printf("\n");
    }

    return 0;
}


/* Tarea Abril 02 Uriel Zuniga Numeros primos con Do While */

#include <stdio.h>
#include <stdbool.h>

// Funci�n para verificar si un n�mero es primo
bool es_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;
    int contador_primos;  // Para contar cu�ntos primos hay en el intervalo
    int numero_primos;    // Contador de n�meros primos impresos en la pantalla
    int num_imprimir;     // Para controlar el n�mero de n�meros impresos en la misma l�nea

    do {
        
        printf("Dime el valor inicial del intervalo: ");
        scanf("%d", &inicio);
        printf("Dime el valor final del intervalo: ");
        scanf("%d", &fin);

        // Asegurarnos de que el intervalo tiene menos de 100 primos
        contador_primos = 0;
        for (int i = inicio; i <= fin; i++) {
            if (es_primo(i)) {
                contador_primos++;
            }
        }

        // Verificar que el n�mero de primos no sea mayor a 100
        if (contador_primos > 100) {
            printf("El intervalo tiene m�s de 100 n�meros primos. Intenta otra vez.\n");
        }
    } while (contador_primos > 100);  

    // Imprimir los n�meros primos en el intervalo
    printf("\nLos n�meros primos en el intervalo entre %d y %d son:\n", inicio, fin);
    
    numero_primos = 0;  // Resetear el contador de n�meros primos impresos
    num_imprimir = 0;   // Resetear el contador de n�meros en la l�nea

    for (int i = inicio; i <= fin; i++) {
        if (es_primo(i)) {
            printf("%d ", i);
            numero_primos++;
            num_imprimir++;

            // Si ya se han impreso 20 n�meros, saltar de l�nea
            if (num_imprimir == 20) {
                printf("\n");
                num_imprimir = 0;
            }
        }
    }

    // Si hubo n�meros impresos que no alcanzaron el l�mite de 20 por l�nea
    if (num_imprimir > 0) {
        printf("\n");
    }

    printf("\nTotal de n�meros primos encontrados: %d\n", numero_primos);

    return 0;
}


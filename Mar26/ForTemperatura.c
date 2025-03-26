/* Ejemplo 1 For Uriel Zuniga Marzo 26 */

#include<stdio.h>

int main() {
    float temp_C, final, delta, temp_K;
    int n, i;
    char continuar;  // Variable para que el usuario decida cuantas veces lo quiere ejecutar

    do {
        printf("Dime la temperatura inicial (en Celsius): ");
        scanf("%f", &temp_C);

        printf("Dime la temperatura final (en Celsius): ");
        scanf("%f", &final);

        printf("Dime el numero de pasos: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("El numero de pasos debe ser un numero positivo.\n");
            continue;  
        }

        delta = (final - temp_C) / n;

        // Ciclo para imprimir las temperaturas en Celsius y Kelvin
        for(i = 0; i < n; i++) {
            temp_K = temp_C + 273.15;  // Conversión a Kelvin
            printf("Celsius: %.2f, Kelvin: %.2f\n", temp_C, temp_K);
            temp_C = temp_C + delta;  // Incremento de la temperatura
        }

        // Preguntar si el usuario desea ejecutar el programa nuevamente
        printf("\nDeseas ejecutar el programa nuevamente? (s/n): ");
        scanf(" %c", &continuar);  // Espacio antes de %c para ignorar el salto de línea previo

    } while (continuar == 's' || continuar == 'S'); 
    printf("Gracias por usar el programa.\n");

    return 0;
}

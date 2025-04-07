/*  Ejercicio en clase Abril 07 Uriel Zuniga */

#include <stdio.h>

#define MAX_TEMPERATURES 20

int main() {
    float temp_inicial, temp_final;
    float temperaturas[MAX_TEMPERATURES];

    printf("Dime la temperatura inicial en Celsius: ");
    scanf("%f", &temp_inicial);

    printf("Dime la temperatura final en Celsius: ");
    scanf("%f", &temp_final);

    // Validamos que la temperatura final sea mayor o igual a la inicial
    if (temp_final < temp_inicial) {
        printf("La temperatura final debe ser mayor o igual a la inicial.\n");
        return 1;
    }

    float incremento = (temp_final - temp_inicial) / (MAX_TEMPERATURES - 1);

    printf("\nTemperaturas en Celsius y Kelvin:\n");
    printf("Celsius\t\tKelvin\n");
    printf("-----------------------\n");

    // Llenar el arreglo con las temperaturas y mostrar los resultados
    for (int i = 0; i < MAX_TEMPERATURES; i++) {
        temperaturas[i] = temp_inicial + (i * incremento);
        float kelvin = temperaturas[i] + 273.15;
        printf("%.2f\t\t%.2f\n", temperaturas[i], kelvin);
    }

    return 0;
}

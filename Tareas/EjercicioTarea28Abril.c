/* Tarea ejercicio 28 de Abril Uriel Zuniga */

#include <stdio.h>

int main() {
    float x_min, x_max, y_min, y_max, delta;
    
    // Solicitamos al usuario los límites y el espaciado
    printf("Ingresa el valor mínimo de X: ");
    scanf("%f", &x_min);
    printf("Ingresa el valor maximo de X: ");
    scanf("%f", &x_max);
    printf("Ingresa el valor minimo de Y: ");
    scanf("%f", &y_min);
    printf("Ingresa el valor maximo de Y: ");
    scanf("%f", &y_max);
    printf("Ingresa la distancia delta entre puntos: ");
    scanf("%f", &delta);

    printf("\nCoordenadas generadas:\n");

    // Generamos la retícula
    for (float x = x_min; x <= x_max; x += delta) {
        for (float y = y_min; y <= y_max; y += delta) {
            printf("(%.2f, %.2f)\n", x, y);
        }
    }

    return 0;
}

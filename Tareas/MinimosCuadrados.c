/* Tarea ejercicio minimos cuadrados Uriel Zuniga */

#include <stdio.h>

#define N 5 // Número de puntos

int main() {
    // Datos del laboratorio
    float x[N] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float y[N] = {2.1, 2.9, 3.7, 4.5, 5.3};

    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    float a, b;

    for(int i = 0; i < N; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    a = (N * sum_xy - sum_x * sum_y) / (N * sum_x2 - sum_x * sum_x);
    b = (sum_y - a * sum_x) / N;

    printf("EcuaciOn de la recta ajustada: y = %.4fx + %.4f\n", a, b);

    return 0;
}

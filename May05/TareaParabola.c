/* Tarea ejercicio 05 Mayo Uriel Zuniga */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Función a evaluar: f(x) = x^2 + 1
double funcion(double x) {
    return x * x + 1;
}

int main() {
    FILE *archivo;
    int n;
    double lim_inf, lim_sup;

    archivo = fopen("entrada.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Leemos los datos
    if (fscanf(archivo, "%d %lf %lf", &n, &lim_inf, &lim_sup) != 3) {
        printf("Error al leer los datos del archivo.\n");
        fclose(archivo);
        return 1;
    }
    fclose(archivo);

    if (n <= 0) {
        printf("El número de puntos debe ser mayor que cero.\n");
        return 1;
    }

    // Reservar memoria para los arreglos
    double x[n];
    double fx[n];

    double paso = (lim_sup - lim_inf) / (n - 1);

    // Llenar los arreglos
    for (int i = 0; i < n; i++) {
        x[i] = lim_inf + i * paso;
        fx[i] = funcion(x[i]);
    }

    // Imprimir resultados
    printf("Evaluando f(x) = x^2 + 1 en %d puntos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("x = %.4f -> f(x) = %.4f\n", x[i], fx[i]);
    }

    return 0;
}

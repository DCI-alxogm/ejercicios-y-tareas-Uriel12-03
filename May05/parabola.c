/* Ejercicio 5 de mayo Uriel Zuniga */

#include <stdio.h>
#include <stdlib.h>

// Definimos la función f(x) = x^2 + 1
double funcion(double x) {
    return x * x + 1;
}

int main() {
    FILE *archivo;
    int n;
    double a, b;

    // Abrimos archivo para lectura
    archivo = fopen("entrada.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo de entrada.\n");
        return 1;
    }

    // Leemos el número de evaluaciones y límites
    fscanf(archivo, "%d", &n);
    fscanf(archivo, "%lf", &a);
    fscanf(archivo, "%lf", &b);
    fclose(archivo);

    // Calcular paso entre puntos
    double paso = (b - a) / (n - 1);

    // Evaluar y mostrar resultados en pantalla
    for (int i = 0; i < n; i++) {
        double x = a + i * paso;
        double y = funcion(x);
        printf("x = %.2f, f(x) = %.2f\n", x, y);
    }

    return 0;
}

/* Arreglos ejercicio 1 Uriel Zuniga Abril 28 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n_filas = 3, m_cols = 3;
    float array_2d[3][3]; // Declaramos la matriz
    int i, j;

    // Inicializar la matriz en 0
    for(i = 0; i < n_filas; i++) {
        for(j = 0; j < m_cols; j++) {
            array_2d[i][j] = 0.0;
        }
    }

    printf("Ingrese los valores para una matriz 3x3:\n");
    for(i = 0; i < n_filas; i++) {
        for(j = 0; j < m_cols; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &array_2d[i][j]);
        }
    }

    // Imprimir la matriz
    printf("\nMatriz ingresada:\n");
    for(i = 0; i < n_filas; i++) {
        for(j = 0; j < m_cols; j++) {
            printf("%.2f\t", array_2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}

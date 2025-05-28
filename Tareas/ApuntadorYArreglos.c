/* Tarea 21 de mayo Suma de 6 numeros con apuntador Uriel Zuniga */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i, suma = 0;

    // Asignar memoria para los 6 enteros
    ptr = (int *)malloc(6 * sizeof(int));

    if (ptr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Ingresamos los 6 números
    printf("Ingresa 6 números:\n");
    for (i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Calculamos la suma
    for (i = 0; i < 6; i++) {
        suma += ptr[i];
    }

    printf("La suma de los 6 números es: %d\n", suma);

    free(ptr);

    return 0;
}

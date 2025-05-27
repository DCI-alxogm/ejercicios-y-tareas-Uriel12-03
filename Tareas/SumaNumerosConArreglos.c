/* Tarea 21 de mayo Suma de 6 numeros con un arreglo Uriel Zuniga */

#include <stdio.h>

int main() {
    int numeros[6];         // El arreglo para almacenar los 6 números
    int *ptr;               // El apuntador a entero
    int suma = 0;

    // Aqui asignamos el apuntador al inicio del arreglo
    ptr = numeros;

    // Pedimos al usuario que ingrese los 6 números
    printf("Dame los 6 números enteros:\n");
    for(int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", ptr + i);   // Usamos el apuntador para guardar los datos
    }

    for(int i = 0; i < 6; i++) {
        suma += *(ptr + i);     // Usamos el apuntador para acceder a los datos
    }

    // Y por ultimo mostramos el resultado
    printf("La suma de los 6 números es: %d\n", suma);

    return 0;
}

/* Ejemplo 1 Do While Numero positivo Uriel Zuniga Maro 31 */

#include <stdio.h>

int main() {

    int numero;  // Es la variable para almacenar el valor ingresado por el usuario

    do {
        printf("Dame un numero positivo: ");
        scanf("%d", &numero);

        // Verifica si el número es negativo o cero
        if (numero <= 0) {
            printf("El numero debe ser positivo. Intenta otra vez.\n");
        }

    } while (numero <= 0);  // El ciclo se repite mientras el número no sea positivo

    printf("Numero positivo ingresado: %d\n", numero);

    return 0;
}

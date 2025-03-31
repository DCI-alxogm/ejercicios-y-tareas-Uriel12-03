/* Ejemplo 3 Do While Numero positivo con ciclo Uriel Zuniga Marzo 31 */

#include <stdio.h>

int main() {

    int numero;  
    char continuar;  

    do {
        do {
            printf("Dame un numero positivo: ");
            scanf("%d", &numero);

            // Verificar si el n�mero es negativo o cero
            if (numero <= 0) {
                printf("El numero debe ser positivo. Dame otro valor.\n");
            }

        } while (numero <= 0);  // El ciclo se repite mientras el n�mero no sea positivo

        printf("Numero positivo ingresado: %d\n", numero);

        // Preguntar al usuario si desea hacer otro c�lculo
        printf("Deseas hacer otro calculo (s/n): ");
        scanf(" %c", &continuar);  

    } while (continuar == 's' || continuar == 'S');  // Continuar si la respuesta es 's' o 'S'

    printf("Perfecto, hasta luego\n");

    return 0;
}

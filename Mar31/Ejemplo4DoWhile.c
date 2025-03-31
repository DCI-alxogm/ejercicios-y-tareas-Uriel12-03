/* Ejemplo 4 Do While Variable X con ciclo Uriel Zuniga Marzo 31 */

#include<stdio.h>

int main() {
    int inicio, fin, incremento, x;  
    int resultado;  
    char continuar;  

    do {
        // Solicitar los valores de inicio, fin e incremento
        printf("Dame el valor inicial de X: ");
        scanf("%d", &inicio);

        printf("Dame el valor final de X: ");
        scanf("%d", &fin);

        printf("Dame el valor del incremento: ");
        scanf("%d", &incremento);

        // Inicializamos la variable x con el valor inicial
        x = inicio;

        do {
            resultado = x * x;

            printf("f(%d) = %d^2 = %d\n", x, x, resultado);

            x += incremento;

        } while (x <= fin);  

        printf("Deseas hacer otro calculo (s/n): ");
        scanf(" %c", &continuar);  

    } while (continuar == 's' || continuar == 'S');  // Continuar si la respuesta es 's' o 'S'

    printf("Gracias por usar el programa, adios.\n");

    return 0;
}

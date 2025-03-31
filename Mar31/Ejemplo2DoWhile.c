/* Ejemplo 2 Do While Variable X Uriel Zuniga Marzo 31 */

#include<stdio.h>

int main() {
    int inicio, fin, incremento, x;  // Variables para el valor inicial, final, incremento y x
    int resultado;  // Variable para almacenar el valor de x cuadrada

    printf("Ingrese el valor inicial de X: ");
    scanf("%d", &inicio);

    printf("Ingrese el valor final de X: ");
    scanf("%d", &fin);

    printf("Ingrese el valor del incremento: ");
    scanf("%d", &incremento);

    // Inicializamos la variable x con el valor inicial
    x = inicio;

    // Usamos un do-while para calcular y mostrar el valor de x cuadrada
    do {
        resultado = x * x;

        printf("f(%d) = %d^2 = %d\n", x, x, resultado);

        x += incremento;

    } while (x <= fin);  

    return 0;
}



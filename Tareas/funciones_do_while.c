/* Tarea Abril 02 Uriel Zuniga Funciones con Do While */

#include <stdio.h>
#include <math.h>  

int main() {
    double x;            
    double start, end, step; // Intervalo [start, end] y el espaciado (step)

    // Solicitar al usuario el intervalo y el espaciado
    printf("Dime el valor inicial del intervalo (start): ");
    scanf("%lf", &start);

    printf("Dime el valor final del intervalo (end): ");
    scanf("%lf", &end);

    printf("Dime el espaciado (step): ");
    scanf("%lf", &step);

    // Validar que el espaciado sea positivo
    if (step <= 0) {
        printf("El espaciado debe ser un valor positivo.\n");
        return 1;
    }

    x = start;  // Empezar en el valor de inicio

    do {
       
        printf("\nPara x = %.2lf:\n", x);
        printf("Exponencial (exp): %.5lf\n", exp(x));
        if (x > 0) {  // Logaritmo sólo se puede calcular para valores positivos
            printf("Logaritmo (log): %.5lf\n", log(x));
        } else {
            printf("Logaritmo (log): No definido para x <= 0\n");
        }
        printf("Seno (sin): %.5lf\n", sin(x));
        printf("Coseno (cos): %.5lf\n", cos(x));
        if (x >= 0) {  
            printf("Raíz cuadrada (sqrt): %.5lf\n", sqrt(x));
        } else {
            printf("Raíz cuadrada (sqrt): No definida para x < 0\n");
        }

        // Incrementar x en el paso definido
        x += step;

    } while (x <= end);  // El ciclo se repite hasta que x supere el valor de "end"

    return 0;
}

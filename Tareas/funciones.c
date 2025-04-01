/* Funciones exponencial, logaritmo, seno y mas... Uriel Zuniga Abril01 */

#include <stdio.h>
#include <math.h>  

int main() {
    double x, inicio, fin, paso;

    printf("Introduce el valor inicial del intervalo: ");
    scanf("%lf", &inicio);

    printf("Introduce el valor final del intervalo: ");
    scanf("%lf", &fin);

    printf("Introduce el valor del paso: ");
    scanf("%lf", &paso);

    // Verificar si el paso es positivo
    if (paso <= 0) {
        printf("El paso debe ser un valor positivo.\n");
        return 1;
    }

    printf("\nValores de las funciones para x en el intervalo [%.2lf, %.2lf] con paso %.2lf:\n", inicio, fin, paso);
  

    // Para recorrer el intervalo y calcular las funciones
    for (x = inicio; x <= fin; x += paso) {
        printf("x = %.2lf:\n", x);
        printf("  exp(x) = %.5lf\n", exp(x));      
        if (x > 0) {
            printf("  log(x) = %.5lf\n", log(x));  
        } else {
            printf("  log(x) no está definido para x <= 0\n");
        }
        printf("  sin(x) = %.5lf\n", sin(x));      
        printf("  cos(x) = %.5lf\n", cos(x));      
        printf("  sqrt(x) = %.5lf\n", sqrt(x));    
        if (x < 0) {
            printf("  sqrt(x) no está definida para x < 0\n");
        }
      
    }

    return 0;
}

/* Calculadora con conversion de temperatura o coordenadas Uriel Zuniga Marzo 03 */


#include <stdio.h>
#include <math.h>

int main() {
    int opcionPrincipal, opcionCoordenadas;
    double celsius, x, y, z, resultado;
    char continuar;

    do {
        printf("Puedo calcular y convetir temperaturas y  coordenadas, que quieres: \n");
        printf("Convertir temperatura\n");
        printf("Convertir coordenadas cartesianas\n");
        printf("Elige una opción (1 o 2): ");
        scanf("%d", &opcionPrincipal);

        if (opcionPrincipal == 1) {
            // Conversión de temperatura de Celsius a Kelvin
            printf("Ingresa la temperatura en grados Celsius: ");
            scanf("%lf", &celsius);

            resultado = celsius + 273.15; // Conversión de Celsius a Kelvin
            printf("\nListo %.2f grados Celsius son equivalentes a %.2f grados Kelvin.\n", celsius, resultado);
        } 
        else if (opcionPrincipal == 2) {
            // Conversión de coordenadas
            printf("\nConvertir coordenadas.\n");
            printf("De coordenadas cartesianas a...\n");
            printf("Coordenadas esféricas\n");
            printf("Coordenadas cilíndricas\n");
            printf("Elige una opcion (1 o 2): ");
            scanf("%d", &opcionCoordenadas);

            printf("\n Ingresa las coordenadas cartesianas: \n");
            printf("x = ");
            scanf("%lf", &x);
            printf("y = ");
            scanf("%lf", &y);
            printf("z = ");
            scanf("%lf", &z);

            if (opcionCoordenadas == 1) {
                // Convertir a coordenadas esféricas
                double r = sqrt(x * x + y * y + z * z);
                double theta = acos(z / r);
                double phi = atan2(y, x);
                
                printf("\nConversión ha sido realizada\n");
                printf("Las coordenadas esféricas son:\n");
                printf("r = %.2f\n", r);
                printf("theta (en radianes) = %.2f\n", theta);
                printf("phi (en radianes) = %.2f\n", phi);
            } 
            else if (opcionCoordenadas == 2) {
                // Convertir a coordenadas cilíndricas
                double rho = sqrt(x * x + y * y);
                double phi = atan2(y, x);
                
                printf("\nConversión ha sido realizada!\n");
                printf("Las coordenadas cilíndricas son:\n");
                printf("rho = %.2f\n", rho);
                printf("phi (en radianes) = %.2f\n", phi);
                printf("z = %.2f\n", z);
            } 
        } 
        

        // Preguntar si se desea realizar otra operación 
        printf("\n¿Te gustaría realizar otra operación? (s para sí, n para no): ");
        scanf(" %c", &continuar);
        if (continuar == 's' || continuar == 'S') {
            printf("\n Empecemos de nuevo \n");
        }
    } while (continuar == 's' || continuar == 'S');

    printf("\nQue tengas un buen día\n");
    return 0;
}
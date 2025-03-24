/* Ejemplo 3 While Uriel Zuniga Marzo24 */

#include <stdio.h>
#include <string.h>  // Para poder usar la función strcmp y que no haya errores

int main() {
    float temp_C, temp_K;
    float inicial = 100, final = 200, delta;
    int n = 10;
    char op[3];  

    op[0] = 's';
    op[1] = '\0';  
    delta = (final - inicial) / n;

    while (strcmp(op, "s") == 0) {  
        temp_K = 0.0;
        temp_C = inicial;

        while (temp_C <= final) {
            temp_K = temp_C + 273.15;
            printf("%f %f\n", temp_C, temp_K);
            temp_C += delta;  
        }

        printf("Deseas hacer otra operacion? (si/no)\n");
        scanf("%s", op);
    }

    return 0;
}

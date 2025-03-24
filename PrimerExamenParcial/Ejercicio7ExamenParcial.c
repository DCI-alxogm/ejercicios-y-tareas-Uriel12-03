/* Ejercicio numero 7 Operaciones Examen Primer Parcial Uriel Zuniga */

#include <stdio.h>
#include <math.h>

int main() {
    double x, a, b, c;

    x = 5 + 3 * (pow(2, 3) - 4);
    printf("1. x = 5 + 3 * (2^3 - 4) = %.2f\n", x);

    x = (6 + 2 * 3) / (sqrt(16) + 2);
    printf("2. x = (6 + 2 * 3) / (sqrt(16) + 2) = %.2f\n", x);

    printf("\n3. Ingrese los valores para a, b y c:\n");
    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);
    printf("c = "); scanf("%lf", &c);

    x = (sin(a + pow(b, 2)) + cos(c / 2) * b) / (1 + exp(-a) + sqrt(fabs(b - c)));  // sqrt() para la raíz
    printf("   x = [sin(a+b^2) + cos(c/2)*b] / [1 + e^(-a) + sqrt(|b-c|)] = %.6f\n", x);

    return 0;
}
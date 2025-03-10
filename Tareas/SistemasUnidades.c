/* Tarea 2 Conversion de unidades del SI al sistema Ingles Uriel Zuniga */

#include <stdio.h>

void convertirUnidades() {
    int opcion;
    double valor, resultado;

    // Damos a elegir entre 4 opciones a convertir.
    printf("Dime la cantidad que se va a transformar:\n");
    printf("1) Longitud (metros a pies)\n");
    printf("2) Masa (kilogramos a libras)\n");
    printf("3) Temperatura (Celsius a Fahrenheit)\n");
    printf("4) Velocidad (metros por segundo a millas por hora)\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:  // Longitud (de metros a pies)
            printf("Dime la longitud en metros: ");
            scanf("%lf", &valor);
            resultado = valor * 3.28;  // 1 metro es igual a 3.28 pies
            printf("%.2f metros son igual a %.2f pies.\n", valor, resultado);
            break;
        case 2:  // Masa (de kilogramos a libras)
            printf("Dime la masa en kilogramos: ");
            scanf("%lf", &valor);
            resultado = valor * 2.204;  // 1 kilogramo es igual a 2.204 libras
            printf("%.2f kilogramos son igual a %.2f libras.\n", valor, resultado);
            break;
        case 3:  // Temperatura (de Celsius a Fahrenheit)
            printf("Dime la temperatura en Celsius: ");
            scanf("%lf", &valor);
            resultado = (valor * 9.0 / 5.0) + 32;  // De Celsius a Fahrenheit
            printf("%.2f grados Celsius son igual a %.2f grados Fahrenheit.\n", valor, resultado);
            break;
        case 4:  // Velocidad (de metros por segundo a millas por hora)
            printf("Dime la velocidad en metros por segundo: ");
            scanf("%lf", &valor);
            resultado = valor * 2.236;  // 1 metro por segundo es igual a 2.236 millas por hora
            printf("%.2f metros por segundo son igual a %.2f millas por hora.\n", valor, resultado);
            break;
        default:
            printf("No existen mas opciones, dame una valida\n");
            break;
    }
}

int main() {
    // Llamada a la función de conversión de unidades
    convertirUnidades();
    return 0;
}
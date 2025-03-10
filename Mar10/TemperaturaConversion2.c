/* Conversion Celsius/Kelvin y Kelvin/Celsius Uriel Zuniga Marzo 10 */

#include <stdio.h>

int main() {
    int opcion;
    float temperatura, resultado;

    // Aqui el usuario puede seleccionar cual opcion quiere, si de Celsius a Kelvin o viceversa
    printf("Elige una opcion de conversion:\n");
    printf("1. Celsius a Kelvin\n");
    printf("2. Kelvin a Celsius\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    // Una vez seleccionada alguna opcion, se procede a las conversiones 
    if (opcion == 1) {
        // Conversión de Celsius a Kelvin
        printf("Dime la temperatura en Celsius: ");
        scanf("%f", &temperatura);
        resultado = temperatura + 273.15;
        printf("%.2f grados Celsius son igual a %.2f grados Kelvin.\n", temperatura, resultado);
    } else if (opcion == 2) {
        // Conversión de Kelvin a Celsius
        printf("Dime la temperatura en Kelvin: ");
        scanf("%f", &temperatura);
        resultado = temperatura - 273.15;
        printf("%.2f grados Kelvin son igual a %.2f grados Celsius.\n", temperatura, resultado);
    } 

    return 0;
}

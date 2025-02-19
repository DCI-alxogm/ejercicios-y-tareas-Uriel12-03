/* Ejercicio con coordenadas Febrero 19 Uriel Zuniga */

#include<stdio.h>
#include<math.h>

int main() {
    float x, y, z;  // Aqui recibimos las coordenadas cartesianas
    float r, theta, phi;  // Aca las coordenadas esfericas
    float r_cil, theta_cil;  // Aca las coordenadas cilindricas

    // Cuerpo del programa solicitando coordenadas
    printf("Ingrese la coordenada x: \n");
    scanf("%f", &x);

    printf("Ingrese la coordenada y: \n ");
    scanf("%f", &y);

    printf("Ingrese la coordenada z: \n");
    scanf("%f", &z);

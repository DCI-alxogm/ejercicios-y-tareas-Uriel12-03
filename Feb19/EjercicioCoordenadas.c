/* Ejercicio con coordenadas Febrero 19 Uriel Zuniga */

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;  // Son las coordenadas cartesianas
    float r, theta, phi;  // Son las coordenadas esféricas
    float r_cil, theta_cil;  // Son las coordenadas cilíndricas

    printf("Ingrese la coordenada x: \n");
    scanf("%f", &x);

    printf("Ingrese la coordenada y: \n");
    scanf("%f", &y);

    printf("Ingrese la coordenada z: \n");
    scanf("%f", &z);

    // Cálculo de coordenadas esféricas 
    r = sqrt(x * x + y * y + z * z);  
    theta = acos(z / r);  
    phi = atan2(y, x);    

    // Cálculo de coordenadas cilíndricas 
    r_cil = sqrt(x * x + y * y);  
    theta_cil = atan2(y, x);       

    printf("Coordenadas Esféricas (r, theta, phi): (%.2f, %.2f, %.2f)\n", r, theta, phi);
    printf("Coordenadas Cilíndricas (r, theta, z): (%.2f, %.2f, %.2f)\n", r_cil, theta_cil, z);
   
    exit 0;
}
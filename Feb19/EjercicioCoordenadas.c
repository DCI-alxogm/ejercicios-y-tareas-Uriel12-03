/* Ejercicio con coordenadas Febrero 19 Uriel Zuniga */

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;  // Son las coordenadas cartesianas
    float r, theta, phi;  // Son las coordenadas esf�ricas
    float r_cil, theta_cil;  // Son las coordenadas cil�ndricas

    printf("Ingrese la coordenada x: \n");
    scanf("%f", &x);

    printf("Ingrese la coordenada y: \n");
    scanf("%f", &y);

    printf("Ingrese la coordenada z: \n");
    scanf("%f", &z);

    // C�lculo de coordenadas esf�ricas 
    r = sqrt(x * x + y * y + z * z);  
    theta = acos(z / r);  
    phi = atan2(y, x);    

    // C�lculo de coordenadas cil�ndricas 
    r_cil = sqrt(x * x + y * y);  
    theta_cil = atan2(y, x);       

    printf("Coordenadas Esf�ricas (r, theta, phi): (%.2f, %.2f, %.2f)\n", r, theta, phi);
    printf("Coordenadas Cil�ndricas (r, theta, z): (%.2f, %.2f, %.2f)\n", r_cil, theta_cil, z);
   
    exit 0;
}
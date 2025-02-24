/*Ejercicio corregido Coordenadas Uriel Zuniga Feb24 */

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;  // Son las coordenadas cartesianas de entrada
    float r, theta, phi;  // Son las coordenadas esf�ricas de salida
    float rcil, thetacil, zc;  // Son las coordenadas cil�ndricas de salida

    printf("Ingresa las variables x,y,z que desees convertir: \n");
    scanf(" %f ", %x);
    scanf(" %f ", %y);
    scanf(" %f ", %z);


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
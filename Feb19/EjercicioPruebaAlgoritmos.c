/* Ejercicio con algoritmos Febrero 19 Uriel Zuniga */

#include<stdio.h>

int main () {

     float  TemC, TemK; //Variables declaradas
     //El cuerpo del programa
     
     printf("Ingresa por favor el valor de temperatura en Celsius: \n");
     scanf("%f", &TemC); //Aqui se lee el valor ingresado de Celsius 
     TemK = TemC + 273.15; //Se hace la operación de conversion
     printf("La temperatura en Kelvin es: %f \n", TemK);
     return 0;
}
     

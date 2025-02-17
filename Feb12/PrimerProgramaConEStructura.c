/*
12 de Febrero del 2025
Uriel Eduardo Zuniga Martinez
Primer programa, mostrando estructura, definicion de variables, imprimir y leer valores de la pantalla 
*/

#include<stdlib.h> //Es la libreria estandar de C
#include<stdio.h> //ES la libreria que interacciona con la pantalla

int main (){
    char nombre[10];
    int edad;
    float temperatura;
    //Cuerpo del programa;
    printf("¿Cual es tu nombre? \n");
    scanf("%s", nombre);
    printf("Hola, %s este es el segundo programa del curso PB2025\n", nombre); //El caracter "\n" indica salto de linea
   
    
    printf("Introduce tu edad \n");
    scanf("%i", &edad); //%i indica el tipo de variable (enteros) 
    printf("¿Que temperatura marco el termometro la ultima vez que fuiste al supermercado? \n");
    scanf("%f", &temperatura);
    
    printf("Tu edad es: %i\n", edad);
    printf("Tu ultimo registro de temperatura fue: %f\n", temperatura); 
    
    printf("Hola, %s, tu edad es: %i, y la temperatura fue: %f\n", nombre, &edad, temperatura); 
    exit(0);
    }

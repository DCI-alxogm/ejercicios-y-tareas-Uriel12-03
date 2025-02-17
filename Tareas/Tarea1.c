/* Programa 17 de Febrero Tarea Numero 1*/

#include <stdio.h>

int main( ) {

    float a, b, c, d;  //Se declaran las variables
    float e1, e2, e3, e4;  // Aqui son las variables en las que se meten los resultados 

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);  

    printf("Ingrese el valor de b: ");
    scanf("%f", &b);  

    printf("Ingrese el valor de c: ");
    scanf("%f", &c);  

    printf("Ingrese el valor de d: ");
    scanf("%f", &d);  

    e1 = (a + b) * c / d; 
    e2 = ((a + b) * c) / d; 
    e3 = (a + b) * (c / d); 
    e4 = a + b * c / d;     
    
    printf("\nResultado final: \n");
    printf("e=(a+b)*c/d=%.2f\n", e1);
    printf("e=(a+b)*c)/d=%.2f\n", e2);
    printf("e=(a+b)*(c/d)=%.2f\n", e3);
    printf("e=a+b*c/d=%.2f\n", e4);

    return 0;
}

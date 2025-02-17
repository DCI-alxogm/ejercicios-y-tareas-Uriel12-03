/* Programa 17 de Febrero Jerarquia de operaciones con enteros y flotantes*/

#include<stdio.h>

int main( ) {

    float a, b, c, d;  
    float e1, e2, e3, e4;  
    
    a = 3.5;
    b = -4.2;
    c = 5.7;
    d = 7.3;

    e1 = (a + b) * c / d;
    e2 = ((a + b) * c) / d;
    e3 = (a + b) * (c / d);
    e4 = a + b * c / d;

    printf("e = (a + b) * c / d = %.2f\n", e1);
    printf("e = (a + b) * c / d = %.2f\n", e2);
    printf("e = (a + b) * (c / d) = %.2f\n", e3);
    printf("e = a + b * c / d = %.2f\n", e4);

}

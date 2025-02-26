/* Programa Par o Impar Uriel Zuniga Feb26 */

#include <stdio.h>
#include <stdlib.h>

int main ( ) {

        char respuesta[2];
        int num, res;

        printf("Cual numero quieres saber si es par o impar\n");
        scanf("%i", &num);
        res=num%2;
        if(res==0){
           printf("%i es par \n", num);
           } else {
                  printf("%i es impar \n", num);
                      }

      printf("Deseas agregar otro valor? \n");
      scanf("%s", respuesta);
      if(respuesta == Si){
         printf("%s Aun no se como hacer eso \n", SI);
         } else {
                  printf("%s Bueno, adios \n", No);  

       
        return(0);

}
        
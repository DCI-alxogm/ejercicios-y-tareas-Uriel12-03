/* Par o impar en ciclo Uriel Zuniga Marzo 03 */

#include <stdio.h>

int main () {

     int numero, residuo;
     char opc[2];
leernumero:
     printf("Introduce un numero para saber si es par o impar \n");
     scanf("%i", &numero);
     residuo=numero%2;
     if(residuo==0){
          printf("el numero es %i es par\n", numero);
     } else {
          printf("el numero %i es impar\n", numero);
     }
     printf("quieres revisar otro numero\n");
     scanf("%s", opc);
     if(opc=="si"){
          goto leernumero;
     } else {
          printf("hasta la proxima\n");
     }

return(0);
}
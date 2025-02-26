/* Programa de Feb26 Par o Impar Uriel Zuniga */

#include <stdio.h>
#include <string.h>

int main ( )
{

    //Definimos variables
      int numero,residuo;
      char respuesta[3];

   //Aqui explica lo que hace el programa 
      printf("Ingresa un numero y te dire si es par o impar:\n");

      scanf ("%i",&numero);

   //Calculo el residuo de la divicion con el modulo
       residuo = numero%2;

   //Condicional, el numro es par
       if (residuo==0){
   //salida
    printf ("%i el numero es par\n",numero);
}else{
    printf("%i el numero es impar\n",numero);
}

   //2do Condicional, quiere verificar otro numero
     printf("quieres verificar otro numero:\n");

     scanf ("%s",respuesta);
     if(strcmp(respuesta,"si")==0){
         printf("si quiero verificar\n");
    }
    if(strcmp(respuesta,"no")==0){
        printf("no quiero verificar\n");
}
    return 0;
}
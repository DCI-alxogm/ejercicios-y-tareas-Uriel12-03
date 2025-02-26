/* Programa Vocal o Consonante Uriel Zuniga Feb26 */

#include <stdio.h>

int main ( ) {

     char c;
     int es_vocalminuscula, es_vocalmayuscula;
     printf("Ingresa una letra: ");
     scanf("%c", %c);
    
     es_vocalminuscula = (c == "a" || c == "e" || c == "i" || c == "o" || c == "u");
     es_vocalmayuscula = (c == "A" || c == "E" || c == "I" || c == "O" || c == "U");
     If (es_vocalmayuscula || es_vocalminuscula) {
          printf("%c es una vocal\n", c);
          } else {
                 printf("%c es consonante \n", c);
        }
return(0); 
}
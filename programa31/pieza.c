#include <stdio.h>
#include <stdlib.h>

int main(){

     int x = 1;
     int cantidad;
     int pieza;
     float largo;

     // Versión WHILE
     
     while(x<=pieza){
       printf("Dime la longitud de la pieza: ");
       scanf("%f", &largo);

       if(largo >= 1.20 && largo <= 1.30){
	  cantidad = cantidad + 1;
       }
       x = x+1;

     }
     printf("La cantidad de piezas aptas son: %i \n", cantidad);

// ---------------------------------------------------------------------------------------------------------

     // VERSIÓN FOR

     /*
      
      for(int x=1; x<=pieza; x++{
      
       printf("Dime la longitud de la pieza: ");
       scanf("%f", &largo);

       if(largo >= 1.20 && largo <= 1.30){
          cantidad = cantidad + 1;
       }

      }

      printf("La cantidad de piezas aptas son: %i \n", cantidad);

     */      


    return EXIT_SUCCESS;
}

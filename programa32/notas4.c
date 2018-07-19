#include <stdio.h>
#include <stdlib.h>


int main(){

    int puntuacion = 0;
    int mayorquesiete;
    int menorquesiete
    int nota;

    // Versión While
    
    while(puntuacion <= 10){
    	
	 printf("Introduce la nota: ");
	 scanf("%i", &nota);

	 if(nota >=7){
	   mayorquesiete = puntuacion + 1;
	 }
	 else{
	   menorquesiete = puntuacion + 1;
	 }	 
    }

    printf("El número de notas igual o superior a 7 es: %i \n", mayorquesiete);
    printf("El número de notas menor que 7 es: %i \n", menorquesiete);

// -----------------------------------------------------------------------------

   // Versión FOR

   /*
  
     for(int puntuacion = 0; puntuacion<=10; puntuacion++){
     	
     	 printf("Introduce la nota: ");
         scanf("%i", &nota);

         if(nota >=7){
           mayorquesiete = puntuacion + 1;
         }
         else{
           menorquesiete = puntuacion + 1;
         }
     
     }

     printf("El número de notas igual o superior a 7 es: %i \n", mayorquesiete);
     printf("El número de notas menor que 7 es: %i \n", menorquesiete); 
   
   */


    return EXIT_SUCCESS;
}

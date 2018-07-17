#include <stdio.h>
#include <stdlib.h>

int main(){

   int nota1;
   int nota2;
   int nota3;
   int promedio;
   
   printf("Dime la primera nota: ");
   scanf("%i", &nota1);
   printf("Dime la segunda nota: ");   
   scanf("%i", &nota2);
   printf("Dime la tercera nota: ");
   scanf("%i", &nota3);


   promedio = (nota1 + nota2 + nota3) / 3;

   printf(
   (promedio >= 7)? "Promocionado \n":
   (promedio >= 4)? "Regular \n":
   "Reprobado \n");

  

    return EXIT_SUCCESS;
}




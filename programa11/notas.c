#include <stdio.h>
#include <stdlib.h>

int main(){

   double  nota1;
   double  nota2;
   double  nota3;
   double promedio;

   printf("Dime la primera nota: ");
   scanf("%2lf", &nota1);
   printf("Dime la segunda nota: ");
   scanf("%2lf", &nota2);
   printf("Dime la tercera nota: ");
   scanf("%2lf", &nota3);

   promedio = (nota1 + nota2 + nota3)  / 3;

   // VERSION TERNARIO

   printf((promedio >= 7)? "Promocionado.  \n": "No promocionado \n");



   // VERSION IF
   
   /* if (promedio >= 7)
	{
	printf("Promocionado");
	}
   */

    return EXIT_SUCCESS;
}

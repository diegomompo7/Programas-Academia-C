#include <stdio.h>
#include <stdlib.h>

int main(){

    int x=1;
    int cantidad;
    float altura;
    float suma;
    float promedio

    printf("Introduce el número de personas que hay: ");
    scanf("%i",&cantidad);

    // Versión While
    
    while(x<=n){
    	printf("Introduce la altura");
	scanf("%f", &altura);

	suma = suma + altura;

	x = x+1;
    }

    promedio = suma / n;

    printf("El promedio de la altura de los alumnos es: %f \n", promedio);


    

// -----------------------------------------------------------------------------

   // Versión FOR

   /*
      for(int x=1; x<cantidad; x++){

	printf("Introduce la altura");
        scanf("%f", &altura);

        suma = suma + altura;

      }
      promedio = suma / n;

      printf("El promedio de la altura de los alumnos es: %f \n", promedio);
   
   */

    return EXIT_SUCCESS;
}

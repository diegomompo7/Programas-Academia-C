#include <stdio.h>
#include <stdlib.h>

int main () {

int sueldo;

printf("Ingrese el sueldo: ");
scanf("%i", &sueldo);

// VERSIÓN TERNARIO
printf((sueldo>3000)?"Esta persona debe abonar impuestos \n":"Esta persona no debe abonar impuestos \n");

//----------------------------------------------------------------------------------------------------------

// VERSION IF

/* if (sueldo>3000)
{
printf("Esta persona debe abonar
impuestos");
}

*/
 
return EXIT_SUCCESS;

}

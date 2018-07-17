#include <stdio.h>
#include <stdlib.h>

int main () {

int sueldo;

printf("Ingrese el sueldo: ");
scanf("%i", &sueldo);

printf((sueldo>3000)?"Esta persona debe abonar impuestos \n":"Esta persona no debe abonar impuestos \n");

 
return EXIT_SUCCESS;

}

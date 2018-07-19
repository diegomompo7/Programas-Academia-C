#include <stdio.h>
#include <stdlib.h>

int main(){

	float sueldo;
	int anos_antiguedad;


	printf("Introduzca su sueldo: ");
	scanf("%f", &sueldo);
	printf("Introduzca sus años de antigüedad: "),
	scanf("%i", &anos_antiguedad);

	float SueldoTotal = (sueldo < 500 && anos_antiguedad >= 10)? sueldo + (sueldo * 0.2):
	(sueldo < 500 && anos_antiguedad < 10)? sueldo + (sueldo * 0.05):
	sueldo;

	printf("Hay que pagar a este operario %f euros \n", SueldoTotal);


    return EXIT_SUCCESS;
}

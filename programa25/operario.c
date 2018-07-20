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

	// VERSION TERNARIO
	
	printf("Hay que pagar a este operario %f euros \n", SueldoTotal);

	/* VERSION IF

	 if (sueldo < 500 && antiguedad > 10)
		{
		float aumento=sueldo * 0.20;
		float sueldoTotal=sueldo+aumento;
		printf("Sueldo a pagar:");
		printf("%f",sueldoTotal);
		}
		else
		{
		if (sueldo < 500)
		{
		float aumento=sueldo * 0.05;
		float sueldoTotal=sueldo+aumento;
		printf("Sueldo a pagar:");
		printf("%f",sueldoTotal);
		}
		else
		{
		printf("Sueldo a pagar:");
		printf("%f",sueldo);
		}
	}
   */

    return EXIT_SUCCESS;
}

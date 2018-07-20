#include <stdio.h>
#include <stdlib.h>

int main(){

	int dia;
	int mes;
	int ano;

	printf("Dime el día: ");
	scanf("%i", &dia);
	printf("Dime el mes: ");
	scanf("%i", &mes);
	printf("Dime el ano: ");
	scanf("%i", &ano);

	// VERSION TERNARIO
	
	printf((dia == 25 && mes == 12)? "Esta corresponde a Navidad \n": "");

	/* VERSION IF
	 
	   if (mm == 12 && dd == 25)
		{
		printf("La fecha ingresada corresponde a navidad.");
		}
	*/
    return EXIT_SUCCESS;
}

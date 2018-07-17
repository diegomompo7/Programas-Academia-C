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

	printf((dia == 25 && mes == 12)? "Esta corresponde a Navidad \n": "");

    return EXIT_SUCCESS;
}

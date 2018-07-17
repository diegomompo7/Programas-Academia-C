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
	printf("Dime el año: ");
        scanf("%i", &ano);

	printf(
	(mes == 1 || mes == 2 || mes ==3)? "Corresponde al primer trimestre\n": ""); 

    return EXIT_SUCCESS;
}

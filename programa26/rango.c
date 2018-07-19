#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;
	int numero3;

	printf("Introduzca el primer número: ");
	scanf("%i", &numero1);
	printf("Introduzca el segundo número: ");
        scanf("%i", &numero2);
	printf("Introduzca el tercero número: ");
        scanf("%i", &numero3);

	int numero_menor = (numero1 < numero2 && numero1 < numero3) ? numero1:
	(numero2 < numero3) ? numero2:
	numero3;

	int numero_mayor = (numero1 > numero2 && numero1 > numero3) ? numero1:
        (numero2 > numero3) ? numero2:
        numero3;

	printf("%i ", numero_menor);
	printf("- ");
	printf("%i \n", numero_mayor);

    return EXIT_SUCCESS;
}

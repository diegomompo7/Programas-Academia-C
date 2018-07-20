#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1;
	int numero2;
	int numero3;

	printf("Dime el primer número: ");
	scanf("%i", &numero1);
	printf("Dime el segundo número: ");
        scanf("%i", &numero2);
	printf("Dime el tercer número: ");
        scanf("%i", &numero3);

	// VERSION TERNARIO
	
	printf(
	(numero1 < 10 && numero2 < 10 && numero3 < 10)? "Todos los números son menos que diez\n": "");

	/* VERSION IF
	
	if (num1 < 10 && num2 < 10 && num3 < 10)
	{
	printf("Todos los números son menores a diez");
	}

	*/
    return EXIT_SUCCESS;
}

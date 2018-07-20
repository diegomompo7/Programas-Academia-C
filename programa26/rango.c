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

	// VERSION TERNARIO
	int numero_menor = (numero1 < numero2 && numero1 < numero3) ? numero1:
	(numero2 < numero3) ? numero2:
	numero3;

	int numero_mayor = (numero1 > numero2 && numero1 > numero3) ? numero1:
        (numero2 > numero3) ? numero2:
        numero3;

	// VERSION TERNARIO
	
	printf("%i ", numero_menor);
	printf("- ");
	printf("%i \n", numero_mayor);

	/*VERSION IF
	
	if (num1 < num2 && num1 < num3)
	{
	printf("%i",num1);
	}
	else
	{
	if (num2 < num3)
	{
	printf("%i",num2);
	}
	else
	{
	printf("%i",num3);
	}
	}
	printf("-");
	if (num1 > num2 && num1 > num3)
	{
	printf("%i",num1);
	}
	else
	{
	if (num2 > num3)
	{
	printf("%i",num2);
	}
	else
	{
	printf("%i",num3);
	}
	}
   */

    return EXIT_SUCCESS;
}

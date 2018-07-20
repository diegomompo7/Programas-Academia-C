#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;
    int numero3;
    int suma;
    int multiplica;

    printf("Dime el primer número: ");
    scanf("%i", &numero1);

    printf("Dime el segundo número: ");
    scanf("%i", &numero2);

    printf("Dime el tercer número: ");
    scanf("%i", &numero3);

    // VERSION TERNARIO

    printf(
    "La suma del primero y segundo multiplicado por el tercero: %i \n"
    "La suma del primero y el segundo: %i \n ", 
    (numero1 == numero2 && numero1 == numero3)? suma= numero1 + numero2, multiplica= suma * numero3: "");

    /* VERSION IF
    
    if (num1 == num2 && num1 == num3)
	{
	int suma = num1 + num2;
	printf("La suma del primero y segundo:");
	printf("%i",suma);
	printf("\n");
	int producto = suma * num3;
	printf("La suma del primero y segundo
	multiplicado por el tercero:");
	printf("%i",producto);
	}
   */

    return EXIT_SUCCESS;
}

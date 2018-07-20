#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Introduce un número de uno o dos dígitos: ");
    scanf("%i", &num);

    // Version Ternario

    printf(( 0 < num && num < 10)? "El número contiene un dígito \n": 
	   ( 10 <= num && num < 100)? "El número contiene dos dígitos \n":
	   "¡¡¡ERROR. EL VALOR INTRODUCIDO NO ES CORRECTO !!! \n");
  
    // Version IF
    

    /* if (num < 10)
	{
	printf("Tiene un digito");
	}
	else
	{
	printf("Tiene dos digitos");
	}
   */

    return EXIT_SUCCESS;
}

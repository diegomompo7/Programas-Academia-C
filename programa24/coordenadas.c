#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int y;

	printf("Introduce la coordenada x: ");
	scanf("%i", &x);
	printf("Introduce la coordenada y: ");
        scanf("%i", &y);

	// VERSION TERNARIO 
	printf(
	(x > 0 && y > 0)? "Usted está en el 1º Cuadrante\n":
	(x > 0 && y < 0)? "Usted está en el 2º Cuadrante\n":
	(x < 0 && y < 0)? "Usted está en el 3º Cuadrantes\n":
	"Usted está en el 4º Cuadrante\n");

	/* VERSION IF
	 
	 if (x > 0 && y > 0)
		{
		printf("Se encuentra en el primer cuadrante");
		}
		else
		{
		if (x < 0 && y > 0)
		{
		printf("Se encuentra en el segundo cuadrante");
		}
		else
		{
		if (x < 0 && y < 0)
		{
		printf("Se encuentra en el tercer cuadrante");
		}
		else
		{
		printf("Se encuentra en el cuarto cuadrante");
		}
		}
		}
	*/
    return EXIT_SUCCESS;
}

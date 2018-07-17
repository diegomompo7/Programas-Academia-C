#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int y;

	printf("Introduce la coordenada x: ");
	scanf("%i", &x);
	printf("Introduce la coordenada y: ");
        scanf("%i", &y);

	printf(
	(x > 0 && y > 0)? "Usted está en el 1º Cuadrante\n":
	(x > 0 && y < 0)? "Usted está en el 2º Cuadrante\n":
	(x < 0 && y < 0)? "Usted está en el 3º Cuadrantes\n":
	"Usted está en el 4º Cuadrante\n");

    return EXIT_SUCCESS;
}

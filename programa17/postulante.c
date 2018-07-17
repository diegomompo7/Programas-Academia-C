#include <stdio.h>
#include <stdlib.h>

int main(){

    int preguntas;
    int respuestas;
    int porcentaje;

    printf("Cantidad de preguntas: ");
    scanf("%i", &preguntas);

    printf("Cantidad de respuestas acertadas: ");
    scanf("%i", &respuestas);

    porcentaje = (respuestas  * 100) / preguntas;

    printf("Tu porcentaje es del %i % \n", porcentaje);

    printf(
    
    (porcentaje >= 90)? " Nivel Máximo \n":
    (porcentaje >= 75 && porcentaje < 90)? "Nivel Medio \n":
    (porcentaje >= 50 && porcentaje < 75)? "Nivel Regular \n":
    "Fuera de Nivel \n");



    return EXIT_SUCCESS;
}

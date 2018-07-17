#include <stdio.h>
#include <stdlib.h>

int main(){

  int numero;

  printf("Dime un número: ");
  scanf("%i", &numero);

  printf(
  (numero == 0)? "¡¡¡SE HA INGRESADO UN VALOR NULO!!! \n":
  (numero > 0)? "¡¡¡SE HA INTRODUCIDO UN VALOR POSITIVO!!! \n":
  "¡¡¡ SE HA INTRODUCIDO UN VALOR NEGATIVO !!! \n");

    return EXIT_SUCCESS;
}

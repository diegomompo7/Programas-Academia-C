#include <stdio.h>
#include <stdlib.h>

int main () {

  int num1;
  int num2;

  printf("Introduce el número 1: " );
  scanf("%i", &num1);
  printf("Introduce e número 2: ");
  scanf("%i", &num2);

  printf((num1>num2)? "El número %i es mayor que el número %i \n": "EL número %i es menor que el número %i \n", num1, num2);

  return EXIT_SUCCESS;
}


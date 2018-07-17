#include <stdio.h>
#include <stdlib.h>

int main () {

  int num1;
  int num2;
  int suma;
  int resta;
  int producto;
  double division;

  printf("Introduzca el número 1: ");
  scanf("%i",&num1);
  printf("Introduzca el número 2: ");
  scanf("%i", &num2);

  if(num1 > num2){
    suma = num1 + num2;
    resta = num1 - num2;
    printf("La suma de %i y %i es %i \n", num1, num2, suma);
    printf("La resta de %i y %i es %i \n", num1, num2, resta);
  }
  else{
    producto = num1 * num2;
    division = num1 / num2;
    printf("El producto de %i y %i es %i \n", num1, num2, producto);
    printf("La división  entre %i y %i es %.2f \n", num1, num2, division);
  }

  return EXIT_SUCCESS;
}


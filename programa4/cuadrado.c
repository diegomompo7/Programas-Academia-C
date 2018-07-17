#include <stdio.h>
#include <stdlib.h>

int main (){
 
  int area;
  int perimetro;

  printf("Introduce el área del cuadrado: ");
  scanf("%i", &area);

  perimetro = area * 4;

  printf("El perímetro de un área es: %i \n", perimetro);  
}

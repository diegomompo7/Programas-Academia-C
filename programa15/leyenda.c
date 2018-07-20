#include <stdio.h>
#include <stdlib.h>

int main(){

  int numero;

  printf("Dime un número: ");
  scanf("%i", &numero);

  // VERSION TERNARIO
  printf(
  (numero == 0)? "¡¡¡SE HA INGRESADO UN VALOR NULO!!! \n":
  (numero > 0)? "¡¡¡SE HA INTRODUCIDO UN VALOR POSITIVO!!! \n":
  "¡¡¡ SE HA INTRODUCIDO UN VALOR NEGATIVO !!! \n");

  /* VERSION IF
   
   if (num == 0)
   {
    printf("Se ingreso el cero");
   }
    else
   {
    if (num > 0)
   {
    printf("Se ingreso un valor positivo");
   }
   else
   {
    printf("Se ingreso un valor negativo");
   }
   }
    return EXIT_SUCCESS;
}

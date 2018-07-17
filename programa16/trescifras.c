#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int numero;

  printf("Dime un número: ");
  scanf("%i", &numero);

  printf(
  (0 < numero && numero < 10)? "El número introducido contiene una cifra \n":
  (9 < numero && numero < 100)? "El número contiene dos cifras \n":
  (99 < numero && numero < 1000)? "El número contiene tres cifras \n":
  (numero > 999)?"¡¡¡ ERROR. EL NÚMERO CONTIENE CUATRO CIFRAS O MÁS. POR FAVOR, INSERTE UN NÚMERO ENTRE UNA Y TRES CIFRAS!!! \n":
  "¡¡¡ ERROR. EL NÚMERO CONTIENE SIGNOS NEGATIVOS. POR FAVOR, INSERTE UN NÚMERO ENTRE UNA Y TRES CIFRAS!!! \n");    

    return EXIT_SUCCESS;
}

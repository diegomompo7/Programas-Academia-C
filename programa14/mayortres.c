#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int num3;

    printf("Dime el primer número: ");
    scanf("%i", &num1);
    printf("Dime el segundo número: ");
    scanf("%i", &num2);
    printf("Dime el tercer número: ");
    scanf("%i", &num3);

    // VERSION TERNARIO
    printf(
    (num1 > num2)? "El primer número es el número más grande \n":
    (num2 > num3)? "El segundom número es el número más grande \n":
    "El tercer número es el número más grande \n");

   /*  VERSION IF
    
  if (num1 > num2)
  {
   if (num1 > num3)
    {
    printf("%i",num1);
    }
  else
    {
     printf("%i",num3);
    }
  }

  else
   {
    if (num2 > num3)
     {
      printf("%i",num2);
     }
   else
    {
     printf("%i",num3);
    }
 }

*/

    return EXIT_SUCCESS;
}

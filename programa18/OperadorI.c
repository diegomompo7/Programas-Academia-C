#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int num3;

    printf("Inserta el primer número: ");
    scanf("%i", &num1);
    printf("Inserta el segundo número: ");
    scanf("%i", &num2);
    printf("Inserta el tercer número: ");
    scanf("%i", &num3);

    // VERSION TERNARIO

    printf("%i \n", (num1 > num2 && num1 > num3)? num1: 		    
    (num2 > num3)? num2 : num3);
    
/* VERSION IF

if (num1 > num2 && num1 > num3)
{
printf("%i",num1);
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

#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int x=2; x<=100; x=x+2){
	printf("%i \n", x);
    }

    /* while (x <= 100)
	{
	 printf("%i",x);
  	 printf(" - ");
	 x = x + 1;
	}
    */

    return EXIT_SUCCESS;
}

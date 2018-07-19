#include <stdio.h>
#include <stdlib.h>

int main(){

    int suma = 0;

    for(int x=1; x<=10; x++){
      int valor;
      
      printf("Ingrese un valor: ");
      scanf("%i", &valor);

      suma = suma + valor;
    
    }

    int promedio = suma/10;

    printf("La suma de los diez valores es: %i \n", suma);
    printf("El promedio es: %i \n", promedio);
    

    return EXIT_SUCCESS;
}

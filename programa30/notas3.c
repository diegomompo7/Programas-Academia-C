#include <stdio.h>
#include <stdlib.h>

int main(){

    int puntuacion;

    printf("Dime la puntuación: ");
    scanf("%i", &puntuacion);

    // VERSIÓN CON IF

    if(puntuacion == 9 || puntuacion == 10) {
  
      printf("¡¡¡ENHORABUENA, HAS SACADO UN SOBRESALIENTE!!!");

    }
    else if (puntuacion == 7 || puntuacion == 8) {

      printf("¡¡¡ENHORABUENA, HAS SACADO UN NOTABLE!!!");

    }
    else if (puntuacion == 6) {

      printf("¡¡¡ENHORABUENA, HAS SACADO UN BIEN!!!");

    }
    else if (puntuacion == 5 ) {

      printf("¡¡¡ENHORABUENA, HAS SACADO UN SUFICIENTE!!!");

    }
    else if (puntuacion == 4 || puntuacion == 3 || puntuacion == 2 || puntuacion == 1 || puntuacion == 0) {

      printf("¡¡¡LO SIENTO, HAS SACADO UN INSUFICIENTE!!!");

    }

// ---------------------------------------------------------------------------------------------------------

    // VERSIÓN CON SWITCH CASE 
    
    /* switch(puntuacion){
    	
        case 0:
	case 1;
       	printf(" ¡¡¡LO HAS HECHO MUY MAL!!!");
	break;

	case 2:
	case 3;
	case 4;
        printf(" ¡¡¡LO SIENTO, HAS SUSPENDIDO!!!");
        break;

	case 5:
	printf(" ¡¡¡ APROBADO RASPADO !!!");
	break;

	case 6:
	printf(" ¡¡¡ BIEN HECHO!!!");
	break;

	case 7:
	case 8:
	printf ("¡¡¡EXCELENTE TRABAJO, TIENES UN NOTABLE!!!");
	break;

	case 9:
	case 10:
	printf("¡¡¡ ENHORABUENA, HAS SACADO UN SOBRESALIENTE!!!");
	break;
      }
    
     */

// ---------------------------------------------------------------------------------------------------------

    // VERSIÓN CON TERNARIOS
    
    /*

    texto = (9 == puntuacion  || puntuacion  == 10)? "¡ENHORABUENA, HAS SACADO UN SOBRESALIENTE!":
	    (7 ==  puntuacion  || puntuacion  == 8)? "¡ENHORABUENA, HAS SACADO UN NOTABLE!":
	    (puntuacion == 6)? "¡ENHORABUENA, HAS SACADO UN BIEN!":
	    (puntuacion == 5 )? "¡ENHORABUENA, HAS SACADO UN SUFICIENTE!":
	    (puntuacion >= 0 && puntuacion <=4) "¡LO SIENTO, HAS SACADO UN INSUFICIENTE!":
	    "";
	
    printf(texto);

    */	

    return EXIT_SUCCESS;
}

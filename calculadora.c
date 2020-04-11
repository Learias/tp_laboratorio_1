# include <stdlib.h>
#include  <stdio.h>

// incluyo biblioteca propia
#include "calculos.h"

int main() {
	float numero1, numero2;
	char respuesta;

	do{

		printf("Bienvenido a  MiCalculadora" );
		printf("\nIngrese el primer operando: ");
		scanf("%f", &numero1);

		printf("\nIngrese el segundo operando: ");
		scanf("%f", &numero2);


		printf("\nLa suma de los numeros es: %.2f", suma(numero1, numero2));
		printf("\nLa resta de los numeros es: %.2f", resta(numero1, numero2));
		printf("\nLa division de los numeros es: %.2f", division(numero1, numero2));
		printf("\nLa multiplicacion de los numeros es: %.2f", multiplicacion(numero1, numero2));
		printf("\nEl factorial del primer numero es: %.2f", factorial(numero1));
		printf("\nEl factorial del segundo numero es: %.2f", factorial(numero2));


	 printf("\nQuiere realizar la misma operación con números distintos? (s/n) : ");
	 __fpurge(stdin);
	 scanf("%c",&respuesta);
	 respuesta = tolower(respuesta);

	}while(respuesta == 's');



	return 0;
}


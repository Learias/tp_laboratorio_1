# include <stdlib.h>
#include  <stdio.h>
#include "calculos.h"

int main() {
	int numero1, numero2;
	char respuesta;

	do{

		printf("Bienvenido a  MiCalculadora" );
		printf("\nIngrese el primer operando: ");
		scanf("%d", &numero1);

		printf("\nIngrese el segundo operando: ");
		scanf("%d", &numero2);


		printf("\nLa suma de los números es: %d", suma(numero1, numero2));
		printf("\nLa resta de los números es: %d", resta(numero1, numero2));

	 printf("\nQuiere realizar la misma operación con números distintos?: (s/n)");
	 scanf("%c",&respuesta);
	}while(respuesta == 's');



	return 0;
}


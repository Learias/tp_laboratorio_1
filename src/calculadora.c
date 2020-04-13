# include <stdlib.h>
#include  <stdio.h>

// incluyo biblioteca propia

#include "calculos.h"

int main() {
	setbuf(stdout, NULL);

	float numero[2];
	float resSuma = 0;
	float resResta = 0;
	float resMultiplicacion = 0;
	float resDivision = 0;
	float resFactorialA = 0;
	float resFactorialB = 0;
	int opcion;
	int contador = 0;
	char operacion;


	do{

		    //luego de ingresar los datos la primera vez

	    if( contador >= 1 && opcion != 4){

	        printf("\n El dato ha sido ingresado exitosamente!\n");

	    }

	                 // menú

		printf("\nBienvenido a  MiCalculadora \n");


		printf("\n1)Ingresar el primer operando ");
		printf("\n2)Ingrese el segundo operando ");
		printf("\n3)Calcular todas las operaciones ");
		printf("\na)calcular la suma ");
		printf("\nb)Calcular la resta ");
		printf("\nc)Calcular la division ");
		printf("\nd)Calcular la multiplicacion ");
		printf("\ne)Calcular el factorial de los numeros ");
		printf("\n4)Informar resultados ");
		printf("\n5)Salir ");
		printf("\nIngrese la opcion deseada:  ");

         // almaceno la opcion ingresada en la variable opcion

		scanf("%d", &opcion);

         // defino los casos mediante switch

		switch(opcion){

		    case 1:
		    printf("\nIngrese el primer operando: ");
		    scanf("%f", &numero[1]);
		    break;

		    case 2:
		    printf("\nIngrese el segundo operando: ");
		    scanf("%f", &numero[2]);
		    break;

		    case 3:

		    printf("Cual de las 5 operaciones desea realizar? ingrese (A/B/C/D/E): ");
		    fflush(stdin); //limpia el buffer en windows
		    // __fpurge(stdin); limpia el buffer en linux
		    scanf("%c", &operacion);
		    operacion = tolower(operacion);


		         // valido el tipo de operacion a realizar
		    do{

		        printf("la opcion ingresada no corresponde, vuelva a intentarlo, ingrese (A/B/C/D/E): ");
		        fflush(stdin);
		        scanf("%c", &operacion);
		        operacion = tolower(operacion);


		    } while(operacion != 'a' && operacion != 'b' && operacion != 'c' && operacion != 'd' && operacion != 'e');

               //una vez validado, defino la operación para cada caso

		    if(operacion == 'a'){

		       resSuma = suma(numero[1], numero[2]);
		       break;

		    } else if (operacion == 'b'){

		      resResta = resta(numero[1], numero[2]);

		    } else if (operacion == 'c'){

		      resDivision = division(numero[1], numero[2]);

		    } else if (operacion == 'd'){

		      resMultiplicacion = multiplicacion(numero[1], numero[2]);

		    } else {

		        resFactorialA = factorial(numero[1]);
		        resFactorialB = factorial(numero[2]);
		    }


		    break;

		    case 4:
		    printf("\nLa suma de los numeros es: %.2f", resSuma);
	       	printf("\nLa resta de los numeros es: %.2f", resResta);
	     	printf("\nLa division de los numeros es: %.2f", resDivision);
	     	printf("\nLa multiplicacion de los numeros es: %.2f", resMultiplicacion);
		    printf("\nEl factorial del primer numero es: %.2f", resFactorialA);
		    printf("\nEl factorial del segundo numero es: %.2f", resFactorialB);
		    printf("\n");


		    break;

		}


     contador++;

	 // system("clear"); linux
     //system("cls"); windows
     system("pause"); // única opción utilizable en eclipse

	}while(opcion != 5);

printf("\nGracias por utilizar MiCalculadora");

	return 0;
}



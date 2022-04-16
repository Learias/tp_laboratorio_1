/*
 * calculosTP1.c
 *
 *  Created on: 14 abr. 2022
 *      Author: WIN10
 */


#include "calculosTP1.h"
// suma

float Suma(float numeroIngresado1, float numeroIngresado2) {

    float resultado;

    resultado = numeroIngresado1 + numeroIngresado2;

    return resultado;
}


// resta

float Resta(float numeroIngresado1, float numeroIngresado2) {

	float resultado;

	resultado = numeroIngresado1 - numeroIngresado2;

	return resultado;

}

//división

float Division(float numeroIngresado1, float numeroIngresado2) {

	float resultado;

	if(numeroIngresado2 == 0){

		resultado = 0;

	} else {

		resultado = numeroIngresado1 / numeroIngresado2;

	}

	return resultado;
}


// multiplicación

float Multiplicacion(float numeroIngresado1, float numeroIngresado2) {

	float resultado;

	if(numeroIngresado2 == 0){

		resultado = 0;

	} else {

		resultado = (numeroIngresado1 + 0.0) * numeroIngresado2;

	}

	return resultado;

}


//factorial

float Factorial(float numeroIngresado){

	if(numeroIngresado < 0){

		return 0;
	}

	int factorial = 1;
	int i;

	for(i = 1; i <= numeroIngresado ; i++){

		factorial = i * factorial;
	}

	return factorial;
}



// promedio

float SacarPromedio(float numeroIngresado1, float numeroIngresado2){


   return (float) (numeroIngresado1 + numeroIngresado2) / 2;


}

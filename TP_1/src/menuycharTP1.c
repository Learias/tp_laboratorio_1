/*
 * menuycharTP1.c
 *
 *  Created on: 14 abr. 2022
 *      Author: WIN10
 */
#include <stdio.h>
#include <stdlib.h>
#include "menuycharTP1.h"
#include "calculosTP1.h"
#include <ctype.h>
#include <windows.h>

//Menú
int ShowMenu(char* mensaje, int opcion){

   char operacion;
   int option;
   do{
		puts(mensaje);

	scanf("%d", &opcion);
	scanf("%c", &operacion);


	if(isalpha(operacion)){
	    //system("clear");
		system("cls");
	    printf("\nNo puede ingresar letras\n");
	}

   }while((isalpha(operacion))||(opcion < 1 || opcion >6));

    option = opcion;
	return option;
}



//Pago de tarjeta de debito (llamando a la funcion multiplicacion y resta de mi biblioteca de calculos)
float PagoTarjetaDebito(float valorInicial){

    float acumulador;
    float valorFinal;
    if(valorInicial == 0){
        return 0;
    }
    while(valorInicial > 0){
    acumulador = Multiplicacion(valorInicial, 0.10);
    valorFinal = Resta(valorInicial,acumulador);
    return valorFinal;
    }
}


//Pago de tarjeta de credito (llamando a la funcion multiplicacion de mi biblioteca de calculos)
float PagoTarjetaCredito(float valorInicial){

    float acumulador;
    float valorFinal;
    if(valorInicial == 0){
        return 0;
    }
    while(valorInicial > 0){
    acumulador = Multiplicacion(valorInicial, 0.25);
    valorFinal = Suma(valorInicial, acumulador);
    return valorFinal;
    }

}


//Pago con Bitcoin (llamando a la funcion division de mi biblioteca de calculos)
float PagoConBTC(float valorInicial){

    float BTC = 4606954.55; //en ars
    float pasaje;
    if(valorInicial == 0){
        return 0;
    }
    while(valorInicial > 0){
    pasaje = Division(valorInicial, BTC);
    return pasaje;
    }


}

//Calculo de diferencia entre vuelos (llamando a la funcion resta de mi biblioteca de calculos)
float DiferenciaValorVuelo(float valorUno, float valorDos){

    float diferencia;
    if(valorUno == 0 && valorDos == 0){
        return 0;
    }
    if(valorUno >= valorDos){
       diferencia = Resta(valorUno, valorDos);
       return diferencia;
    }else{
       diferencia = Resta(valorDos, valorUno);
       return diferencia;
    }


}


//Retorna mensaje ingresado como parámetro
void DarMensaje(char* mensaje){

	printf(mensaje);
}


//almacena el valor ingresado en la posición de memoria, retorna 0 si no funciona, -1 si funciona
int getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado)
{
	int retorno = 0;
	float auxiliarFloat; //buffer
	int retornoScanf;
	//Revisar que todos los datos esten bien.
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroingresado != NULL && reintentos >= 0)
	{
		printf("\n%s", mensaje);
		retornoScanf = scanf("%f", &auxiliarFloat);
		do
		{
			if (retornoScanf !=1 || auxiliarFloat > maximo || auxiliarFloat < minimo)
			{
				printf("\n%s", mensajeError);
				retornoScanf = scanf("%f", &auxiliarFloat);
				reintentos--;
			}
			else
			{
				reintentos = 0;
				*pNumeroingresado = auxiliarFloat;
				retorno = 1;
			}
		}
		while(reintentos>0);
	}
	return retorno;
}



void mostrarResultados(float valor1, float valor2, float valor3, float valor4, float valor5, float valor6, float valor7, float valor8, float valor9,float valor10, float valor11, float valor12){

	 //system("clear");
	            system("cls");
	            printf("\n\n\nKilometros ingresados: %1.f", valor1);
	            puts("");
	            puts("");
	            printf("\nPrecio vuelo Aerolineas Argentinas: $%1.f", valor2);
	            printf("\na) Precio con tarjeta de debito: $%1.f", valor3);
	            printf("\nb) Precio con tarjeta de credito: $%1.f", valor4);
	            printf("\nc) Precio pagando con Bitcoin: %f", valor5);printf(" BTC");
	            printf("\nd) Mostrar precio unitario (KM): $%f", valor6);

	            printf("\n\nPrecio vuelo Latam: $%1.f", valor7);
	            printf("\na) Precio con tarjeta de debito: $%1.f", valor8);
	            printf("\nb) Precio con tarjeta de credito: $%1.f", valor9);
	            printf("\nc) Precio pagando con Bitcoin: %f", valor10);printf(" BTC");
	            printf("\nd) Mostrar precio unitario (KM): $%f", valor11);

	            printf("\n\n La diferencia de precios es: $%1.f", valor12);
	            puts("");
	            puts("");
	            puts("");
}




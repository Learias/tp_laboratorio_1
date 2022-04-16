
#ifndef MENUYCHARTP1_H_
#define MENUYCHARTP1_H_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

/*
* \brief Muestra el menú
* \param char* mensaje permite ingresar el mensaje deseado
* \param int opcion
* \return valor de opcion ingresado por el usuario
*
*/

int ShowMenu(char* mensaje, int opcion);


/*
* \brief Calcula el valor del precio del vuelo más el descuento por pago en debito
* \param int valorInicial, en este caso seria el valor del vuelo
* \return valor del vuelo con el descuento
*
*/

float PagoTarjetaDebito(float valorInicial);

/*
* \brief Calcula el valor del precio del vuelo más el descuento por pago en credito
* \param int valorInicial, en este caso seria el valor del vuelo
* \return valor del vuelo con el descuento
*
*/

float PagoTarjetaCredito(float valorInicial);


/*
* \brief Calcula el valor del precio del vuelo en Bitcoin
* \param int valorInicial, en este caso seria el valor del vuelo
* \return valor del vuelo en Bitcoin
*
*/

float PagoConBTC(float valorInicial);


/*
* \brief Calcula la diferencia entre los precios de vuelo entre ambas compañias
* \param int valorUno, en este caso seria el valor del vuelo1
* \param int valorDos, en este caso seria el valor del vuelo2
* \return diferencia entre ambos valores
*
*/

float DiferenciaValorVuelo(float valorUno, float valorDos);


/*
* \brief Recibe una cadena de caracteres
* \return Mensaje
*
*/
void DarMensaje(char* mensaje);



/*
* \brief valida todos los datos ingresados para luego almacenar el valor flotante en la posición de memoria que le pasamos
* \param char* mensaje, pedimos los datos al usuario
* \param int reintentos, indicamos cantidad de reintentos para pedir los datos
* \param int minimo, número mínimo que puede ingresar el usuario
* \param int maximo, número maximo que puede ingresar el usuario
* \param char* mensajeError, indicamos que el dato no fue registrado exitosamente
* \param float* pNumeroingresado, pasamos la posición de memoria de la variable para luego almacenar el dato
* \return -1 si funciona, 0 si no funciona
*
*/

int getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroingresado);


void mostrarResultados(float valor1, float valor2, float valor3, float valor4, float valor5, float valor6, float valor7, float valor8, float valor9,float valor10, float valor11, float valor12);

#endif /* MENUYCHARTP1_H_ */

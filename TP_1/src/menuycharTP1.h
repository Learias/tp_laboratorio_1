
#ifndef MENUYCHARTP1_H_
#define MENUYCHARTP1_H_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

/*
* \brief Muestra el menú
* \param int opcion
* \return valor de opcion ingresado por el usuario
*
*/

int ShowMenu(int opcion);


/*
* \brief pide los datos de los kilometros de vuelo
* \return cantididad de kilometros
*
*/

float KilometrosDeVuelo();

/*
* \brief pide el valor del vuelo de Aerolineas Argentinas y lo valida
* \return valor del vuelo de Aerolineas
*
*/

float ValorVueloAerolineas();

/*
* \brief el valor del vuelo de Latam y lo valida
* \return valor del vuelo de Latam
*
*/

float ValorVueloLatam();

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
* \brief Muestra mensaje de despedida
* \return Mensaje
*
*/
void MensajeDespedida();

/*
* \brief Muestra mensaje de bienvenida
* \return Mensaje
*
*/
void MensajeBienvenida();



#endif /* MENUYCHARTP1_H_ */

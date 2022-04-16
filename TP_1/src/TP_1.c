/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //(saco funcion isalpha para validar si el caracter ingresado es letra)
//incluyo bibliotecas propias
#include "calculosTP1.h"
#include "menuycharTP1.h"

int main()
{
    setbuf(stdout,NULL);
       float kilometros=0; //Kms
       float valorAerolineas=0; //Aerolineas
       float valorLatam=0; //Latam
       float pagoDebAerolineas=0;
       float pagoDebLatam=0;
       float pagoCredAerolineas=0;
       float pagoCredLatam=0;
       float pagoBTCAerolineas=0;
       float pagoBTCLatam=0;
       float valorKMAerolineas=0;
       float valorKMLatam=0;
       float diferenciaVuelos=0;
       int opcion;

    DarMensaje("Bienvenido/a\n");
    do{
    //Muestro el menú, valido los datos y devuelvo el valor númerico a opcion
    opcion = ShowMenu("\n1)Ingresar los Kilometros "
    		"\n2)Ingrese el valor del vuelo para Aerolineas Argentinas y Latam "
    		"\n3)Calcular todos los costos "
    		"\n4)Informar resultados "
    		"\n5)Carga forzada de datos "
    		"\n6)Salir "
    		"\nQue opcion desea ingresar?: ",opcion);

    switch(opcion){

            case 1:
            getFloat("\nIngrese los Kilometros: ", 3,1,100000000,"\nEl valor ingresado no es correcto, intentelo otra vez: ",&kilometros);
            break;

            case 2:
            getFloat("\nIngrese el valor de vuelo de Aerolineas: ",3,1,100000000,"\nEl valor ingresado no es correcto, intentelo otra vez: ",&valorAerolineas);
            getFloat("\nIngrese el valor de vuelo de Latam: ",3,1,100000000,"\nEl valor ingresado no es correcto, intentelo otra vez: ",&valorLatam);
            break;

            case 3:
                if(valorAerolineas < 1  && valorLatam < 1){
              puts("No puede acceder a las opciones de calculo sin haber ingresado valores en la opcion 2 ");
              getFloat("\nIngrese el valor de vuelo de Aerolineas: ",3,1,100000000,"\nEl valor ingresado no es correcto, intentelo otra vez: ",&valorAerolineas);
              getFloat("\nIngrese el valor de vuelo de Latam: ",3,1,100000000,"\nEl valor ingresado no es correcto, intentelo otra vez: ",&valorLatam);
            }
            pagoDebAerolineas = PagoTarjetaDebito(valorAerolineas);
            pagoDebLatam = PagoTarjetaDebito(valorLatam);
            pagoCredAerolineas = PagoTarjetaCredito(valorAerolineas);
            pagoCredLatam = PagoTarjetaCredito(valorLatam);
            pagoBTCAerolineas= PagoConBTC(valorAerolineas);
            pagoBTCLatam= PagoConBTC(valorLatam);
            valorKMAerolineas = Division(valorAerolineas,kilometros);
            valorKMLatam = Division(valorLatam,kilometros);
            diferenciaVuelos = DiferenciaValorVuelo(valorAerolineas,valorLatam);
            break;

            case 4:
            mostrarResultados(kilometros,valorAerolineas,pagoDebAerolineas,pagoCredAerolineas,pagoBTCAerolineas,valorKMAerolineas,valorLatam,pagoDebLatam,pagoCredLatam,pagoBTCLatam,valorKMLatam,diferenciaVuelos);
            break;


            case 5:
            	//Hardcodeo
            kilometros= 7090;
            valorAerolineas = 133500.66;
            valorLatam = 1350000.77;
            pagoDebAerolineas = PagoTarjetaDebito(valorAerolineas);
            pagoDebLatam = PagoTarjetaDebito(valorLatam);
            pagoCredAerolineas = PagoTarjetaCredito(valorAerolineas);
            pagoCredLatam = PagoTarjetaCredito(valorLatam);
            pagoBTCAerolineas= PagoConBTC(valorAerolineas);
            pagoBTCLatam= PagoConBTC(valorLatam);
            valorKMAerolineas = Division(valorAerolineas,kilometros);
            valorKMLatam = Division(valorLatam,kilometros);
            diferenciaVuelos = DiferenciaValorVuelo(valorAerolineas,valorLatam);
            mostrarResultados(kilometros,valorAerolineas,pagoDebAerolineas,pagoCredAerolineas,pagoBTCAerolineas,valorKMAerolineas,valorLatam,pagoDebLatam,pagoCredLatam,pagoBTCLatam,valorKMLatam,diferenciaVuelos);
            break;

        }


    }while(opcion  != 6);

    DarMensaje("\nHasta luego!");
    return 0;
}

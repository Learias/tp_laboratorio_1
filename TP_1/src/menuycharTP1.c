#include <stdio.h>
#include <stdlib.h>
#include "menuycharTP1.h"
#include "calculosTP1.h"
#include <ctype.h>
#include <windows.h>

//Menú completo
int ShowMenu(int opcion){

    float x; //Kms
    float y; //Aerolineas
    float z; //Latam
    float pagoDebY;
    float pagoDebZ;
    float pagoCredY;
    float pagoCredZ;
    float pagoBTCY;
    float pagoBTCZ;
    float valorKMY;
    float valorKMZ;
    float diferenciaVuelos;
    int option;
    char operacion;
   do{
		printf("\n1)Ingresar los Kilometros ");
		printf("\n2)Ingrese el valor del vuelo para Aerolineas Argentinas y Latam ");
		printf("\n\n3)Calcular todos los costos ");
		printf("\n___________________________________________________________________________________________ ");
		printf("\nEstos calculos estaran habilitados luego de que haya ingresado datos en la opciones 1 y 2  |");
		printf("\n___________________________________________________________________________________________| ");
		printf("\n                                                                                           |");
		printf("\na)Tarjeta de debito (descuento 10%" ")                                                         |");
		printf("\nb)Tarjeta de credito (interes 25%" ")                                                          |");
		printf("\nc)Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)                                            |");
		printf("\nd)Mostrar precio por km (precio unitario)                                                  |");
		printf("\ne)Mostrar diferencia de precio ingresada (Latam - Aerolineas)                              |");
		printf("\n___________________________________________________________________________________________|");
		printf("\n\n4)Informar resultados ");
		printf("\n5)Carga forzada de datos");
		printf("\n6)Salir ");
		printf("\nQue opcion desea ingresar?: ");

	scanf("%d", &opcion);
	scanf("%c", &operacion);


	if(isalpha(operacion)){
	    //system("clear");
		system("cls");
	    printf("\nRecuerde que los calculos todavia no estan habilitados, vuelva a intentarlo ingresando opciones numericas...\n");
	}

	switch(opcion){

        case 1:
        x = KilometrosDeVuelo();
        break;

        case 2:
        y = ValorVueloAerolineas();
        z = ValorVueloLatam();
        break;

        case 3:
            if(y < 1  && z < 1){
          printf("No puede acceder a las opciones de calculo sin haber ingresado valores en las opciones 1 y 2 ");
             y = ValorVueloAerolineas();
             z = ValorVueloLatam();
        }else{

        printf("Cual de estas 5 operaciones desea calcular sobre ambos vuelos? (A/B/C/D/E): ");
        scanf("%c", &operacion);
        fflush(stdin); //(windows)
		//__fpurge(stdin); //linux
		operacion = tolower(operacion);
        }

		while(operacion != 'a' && operacion != 'b' && operacion != 'c' && operacion != 'd' && operacion != 'e' && operacion != 't'){

		   printf("la opcion ingresada no corresponde, vuelva a intentarlo, ingrese (A/B/C/D/E): ");
		   //__fpurge(stdin);//linux
		   fflush(stdin);
		   scanf("%c", &operacion);
		   operacion = tolower(operacion);

		}

        if(operacion == 'a'){
        pagoDebY = PagoTarjetaDebito(y);
        pagoDebZ = PagoTarjetaDebito(z);
        //system("clear");
        system("cls");
        }else if(operacion == 'b'){
        pagoCredY = PagoTarjetaCredito(y);
        pagoCredZ = PagoTarjetaCredito(z);
        //system("clear");
        system("cls");
        }else if(operacion == 'c'){
        pagoBTCY= PagoConBTC(y);
        pagoBTCZ= PagoConBTC(z);
        //system("clear");
        system("cls");
        }else if(operacion == 'd'){
        valorKMY = Division(y,x);
        valorKMZ = Division(z,x);
        //system("clear");
        system("cls");
        }else if(isalpha(operacion) && operacion == 'e'){
        diferenciaVuelos = DiferenciaValorVuelo(y,z);
        //system("clear");
        system("cls");
        }
        break;


        case 4:
        //system("clear");
        system("cls");
        printf("\n\n\nKilometros ingresados: %1.f", x);
        puts("");
        puts("");
        printf("\nPrecio vuelo Aerolineas Argentinas: $%1.f", y);
        printf("\na) Precio con tarjeta de debito: $%1.f", pagoDebY);
        printf("\nb) Precio con tarjeta de credito: $%1.f", pagoCredY);
        printf("\nc) Precio pagando con Bitcoin: %f", pagoBTCY);printf(" BTC");
        printf("\nd) Mostrar precio unitario (KM): $%f", valorKMY);

        printf("\n\nPrecio vuelo Latam: $%1.f", z);
        printf("\na) Precio con tarjeta de debito: $%1.f", pagoDebZ);
        printf("\nb) Precio con tarjeta de credito: $%1.f", pagoCredZ);
        printf("\nc) Precio pagando con Bitcoin: %f", pagoBTCZ);printf(" BTC");
        printf("\nd) Mostrar precio unitario (KM): $%f", valorKMZ);

        printf("\n\n La diferencia de precios es: $%1.f", diferenciaVuelos);
        puts("");
        puts("");
        puts("");
        break;


        case 5:
        //system("clear");
        system("cls");
        pagoDebY = PagoTarjetaDebito(y);
        pagoDebZ = PagoTarjetaDebito(z);
        pagoCredY = PagoTarjetaCredito(y);
        pagoCredZ = PagoTarjetaCredito(z);
        pagoBTCY= PagoConBTC(y);
        pagoBTCZ= PagoConBTC(z);
        valorKMY = Division(y,x);
        valorKMZ = Division(z,x);
        diferenciaVuelos = DiferenciaValorVuelo(y,z);

        printf("\n\n Operaciones forzadas exitosamente! ");
        puts("");
        puts("");

    }


   }while((isalpha(operacion))||(opcion < 1 || opcion >6));

    option = opcion;
	return option;
}

//Kilometros de vuelo
float KilometrosDeVuelo(){
    //system("clear");
	system("cls");
    float kilometers;
    char caracter;
    do{
    printf("\n (Recuerde que no puede ingresar letras, ni números menores a 1)");
    printf("\n Ingrese los Kilometros: ");
    scanf("%f", &kilometers);
    scanf("%c", &caracter);
    }while((isalpha(caracter)) || (kilometers < 1));
    return kilometers;
}

//Valor de vuelo Aerolineas
float ValorVueloAerolineas(){
    float aerolineas;
    char caracter;
    do{
    printf("\n (Recuerde que no puede ingresar letras, ni números menores a 1)");
    printf("\n Ingrese el valor del vuelo de Aerolineas Argentinas: ");
    scanf("%f", &aerolineas);
    scanf("%c", &caracter);
    }while((isalpha(caracter)) || (aerolineas < 1));
    return aerolineas;
}


//Valor de vuelo Latam
float ValorVueloLatam(){
    float latam;
    char caracter;
    do{
    printf("\n (Recuerde que no puede ingresar letras, ni números menores a 1)");
    printf("\n Ingrese el valor del vuelo de Latam: ");
    scanf("%f", &latam);
    scanf("%c", &caracter);
    }while((isalpha(caracter)) || (latam < 1));
    return latam;

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
    valorFinal = valorInicial - acumulador;
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

//Mensaje de despedida al ingresar en la opcion de salida
void MensajeDespedida(){

	puts("\n\nGracias por haber utilizado CalculAgencia");
}

//Mensaje de bienvenida al comenzar el programa
void MensajeBienvenida(){

	puts("\n\nBienvenido/a, para comenzar elija alguna de las opciones que podra encontra aqui abajo");
}


//Link GDB https://onlinegdb.com/VPZlE_ofJ

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //(saco funcion isalpha para validar si el caracter ingresado es letra)
//incluyo bibliotecas propias
#include "calculosTP1.h"
#include "menuycharTP1.h"

int main()
{
    setbuf(stdout,NULL);

    int opcion;

    MensajeBienvenida();
    do{
    //Muestro el menú, valido los datos y devuelvo el valor númerico a opcion
    opcion = ShowMenu(opcion);
    }while(opcion  != 6);

    MensajeDespedida();
    return 0;
}

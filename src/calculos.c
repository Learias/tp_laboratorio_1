
// suma

float suma(float numeroIngresado1, float numeroIngresado2) {
    
    float resultadoSuma;
    
    resultadoSuma = numeroIngresado1 + numeroIngresado2;
    
    return resultadoSuma;
}


// resta

float resta(float numeroIngresado1, float numeroIngresado2) {

	float resultadoResta;

	resultadoResta = numeroIngresado1 - numeroIngresado2;

	return resultadoResta;

}

//división

float division(float numeroIngresado1, float numeroIngresado2) {

	float resultadoDivision;

	if(numeroIngresado2 == 0){

		resultadoDivision = 0;

	} else {

		resultadoDivision = numeroIngresado1 / numeroIngresado2;

	}

	return resultadoDivision;
}


// multiplicación

float multiplicacion(float numeroIngresado1, float numeroIngresado2) {

	float resultadoMultiplicacion;

	if(numeroIngresado2 == 0){

		resultadoMultiplicacion = 0;

	} else {

		resultadoMultiplicacion = numeroIngresado1 * numeroIngresado2;

	}

	return resultadoMultiplicacion;

}


//factorial

float factorial(float numeroIngresado){

	if(numeroIngresado < 0){

		return 0;
	}

	int factorial = 1;
	int i;

	for(i = 1; i <= numeroIngresado ; i++){

		factorial = i * factorial;
	}

	return factorial; // factorial = (n)*(n-1)*(n-2)*(n-3).......
}

#include <stdio.h>
#include "complejos.h"

// Solicita al usuario los datos para un número complejo y lo retorna.
struct Complejo leerComplejo(void)
{
	struct Complejo complejo1;
	printf("Parte real:   ");
	scanf(" %f", &complejo1.real);
	printf("\n");	
	printf("Parte imaginaria:   ");
	scanf(" %f", &complejo1.imaginario);
	return complejo1;
}

//Imprime en pantalla el número complejo en el formato.
void mostrarComplejo(struct Complejo c)
{
	printf("\n%f", c.real);
	printf("\n%f", c.imaginario);
}

//Retorna la suma de dos números complejos.
struct Complejo sumar(struct Complejo c1, struct Complejo c2)
{
	struct Complejo complejo1;
	complejo1.real = c1.real + c2.real;
	complejo1.imaginario = c1.imaginario + c2.imaginario;
	return complejo1;
}
//Retorna el producto de dos números complejos, siguiendo la fórmula:
struct Complejo multiplicar(struct Complejo c1, struct Complejo c2)
{
	struct Complejo complejo1;
	float ac, adi, bci, bdi;
	ac = c1.real * c2.imaginario;
	adi = c1.real * c2.imaginario;
	
	bci = c1.imaginario * c2.real;
	bdi = c1.imaginario * c2.imaginario;
	
	complejo1.real = ac + (bdi * -1);
	complejo1.imaginario = adi + bci;

	return complejo1;
}

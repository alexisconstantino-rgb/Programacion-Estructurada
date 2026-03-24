#include <stdio.h>
#include "complejos.h"

int main (void)
{
	struct Complejo c1, c2, c3;
	c1 = leerComplejo();
	c2 = leerComplejo();
	c3 = sumar(c1, c2);
	mostrarComplejo(c3);
}

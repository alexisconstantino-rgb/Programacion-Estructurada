#ifndef COMPLEJOS_H
#define COMPLEJOS_H

struct Complejo{
	float real;
	float imaginario;
};

// Solicita al usuario los datos para un número complejo y lo retorna.
struct Complejo leerComplejo(void); 

//Imprime en pantalla el número complejo en el formato.
void mostrarComplejo(struct Complejo c);

//Retorna la suma de dos números complejos.
struct Complejo sumar(struct Complejo c1, struct Complejo c2);

//Retorna el producto de dos números complejos, siguiendo la fórmula:
struct Complejo multiplicar(struct Complejo c1, struct Complejo c2);

#endif 

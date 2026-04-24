#include <stdio.h>
#include <math.h>

typedef struct {
	float mod;
	float arg;
}Complexpol;

typedef struct{
	float real;
	float imag;
}Complex;

typedef float pitagoras(float a, float b){return (sqrt(a*a + b*b));}
typedef float angulo(float a, float b){return (atan(b/a));}

//Prototipos de entrada y salida de datos
void llenar(Complex *num);
void imprimir(Complex *num);


// Prototipos para aritmética de escalares complejos
ComplexPol ComplejoRec2Pol(Complex num1);
Complex ComplejoPol2Rec(ComplexPol num1);

// Prototipos para aritmética de escalares complejos
ComplexPol mulComplejosPol(ComplexPol num1, ComplexPol num2);
ComplexPol divComplejosPol(ComplexPol num1, ComplexPol num2);

int main(void)
{
	Complex RA, RB, Rprod, Rdiv;
	ComplexPol PA, PB, Pprod, Pdiv;
	//llenar valores de A

	//llenar valores de B
		
	//rectangular a polar de A
	PA = ComplejoRec2Pol(RA);
	//rectangular a polar de B
	PB = ComplejoRec2Pol(RB);
	
	//multiplicacion de A*B
	Pprod = multComplejosPol(PA, PB);
	//divicion de A/B
	Pdiv = divComplejosPol(PA, PB);
	
	//Polar a rectangular de A
	Rprod = ComplejoPol2Rec(Pprod);
	//Polar a rectangular de B	
	Rdiv = ComplejoPol2Rec(Pdiv);

	//impresion de A*B en forma rectangular
	
	//impresion de A/B en forma rectangular

	return 0;
}
void llenar(Complex *num){
	printf("Valor de la parte real del numero:   ");
	scanf(" %f", &num->real);
	printf("Valor de la parte imaginaria del numero:   ");
	scanf(" %f", &num->imag);
}

ComplexPol ComplejoRec2Pol(Complex num1){
	ComplexPol num;
	num.mod = pitagoras(num1.real, num1.imag);
	num.arg = angulo(num1.real, num1.imag);
	return num;	
}
Complex ComplejoPol2Rec(ComplexPol num1){
	Complex num;
	num.real = num1.mod + cos(num1.arg);
	num.imag = num1.mod + sec(num1.arg);
	return num;
}
ComplexPol mulComplejosPol(ComplexPol num1, ComplexPol num2){
	ComplexPol num;
	num.mod = num1.mod * num2.mod;
	num.arg = num1.arg + num2.arg;
	return num;
}
ComplexPol divComplejosPol(ComplexPol num1, ComplexPol num2){
	ComplexPol num;
	num.mod = num1.mod / num2.mod;
	num.arg = num1.arg - num2.arg;
	return numl;
}

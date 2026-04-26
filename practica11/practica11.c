#include <stdio.h>
#include <math.h>

typedef struct {
	float mod;
	float arg;
}ComplexPol;

typedef struct{
	float real;
	float imag;
}Complex;

//#define mod(x y) (sqrt(x*x + y*y))
float modulo(float a, float b){return (sqrt(a*a + b*b));}
//#define arg(x y) (atan(y/x))
float argumento(float a, float b){return (atan(b/a));}

//Prototipos de entrada y salida de datos
void llenar(Complex *num);
void imprimir(Complex num);

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
	puts("Ingrese el primer numero complejo:");
	llenar(&RA);
	//llenar valores de B
	puts("Ingrese el segundo numero complejo:");
	llenar(&RB);
		
	//rectangular a polar de A
	PA = ComplejoRec2Pol(RA);
	//rectangular a polar de B
	PB = ComplejoRec2Pol(RB);
	
	//multiplicacion de A*B
	Pprod = mulComplejosPol(PA, PB);
	//divicion de A/B
	Pdiv = divComplejosPol(PA, PB);
	
	//Polar a rectangular del producto
	Rprod = ComplejoPol2Rec(Pprod);
	//Polar a rectangular de la divicion 
	Rdiv = ComplejoPol2Rec(Pdiv);

	//impresion de A*B en forma rectangular
	puts("\nEl resultado del producto de los numeros complejos es:");
	imprimir(Rprod);
	//impresion de A/B en forma rectangular
	puts("\nEl resultado de la divicion de los numeros complejos es:");
	imprimir(Rdiv);
	printf("\n");
	return 0;
}
void llenar(Complex *num){
	printf("\nValor de la parte real del numero:   ");
	scanf(" %f", &num->real);
	printf("\nValor de la parte imaginaria del numero:   ");
	scanf(" %f", &num->imag);
}
void imprimir(Complex num){
	printf("Valor de la parte real del numero:   ");
	printf(" %.3f\n", num.real);
	printf("Valor de la parte imaginaria del numero:   ");
	printf(" %.3f\n", num.imag);
}

ComplexPol ComplejoRec2Pol(Complex num1){
	ComplexPol num;
	num.mod = modulo(num1.real, num1.imag);
	num.arg = argumento(num1.real, num1.imag);
	return num;	
}
Complex ComplejoPol2Rec(ComplexPol num1){
	Complex num;
	num.real = num1.mod * cos(num1.arg);
	num.imag = num1.mod * sin(num1.arg);
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
	return num;
}

#include <stdio.h>
#include <math.h>
//prototipos programa1
void loseta (void);
int cantcajas (float medida1, float medida2);
//prototipos programa2
void rampa (void);
float calculo (float med1, float med2);
//prototipos programa2
void juanita (void);
float sueldo (float hrs, char empleo);
float horas (void);
//funcion principal
int main (void)
{
	int opc;
	do{
		printf("\t\tMENU PRINCIPAL\n");
		printf("\nOpcion 1: Costo de una loseta.\nOpcion 2: Determinar el largo de una rampa.\nOpcion 3: Determinar el sueldo de Juanita.\nOpcion 4: Salir del programa.\n"); 
		scanf(" %d", &opc);
		switch (opc)
		{
			case 1:
				loseta();
				break;
			case 2:
				rampa();
				break;
			case 3:
				juanita();
				break;
			case 4:
				printf("Saliendo...\n");
				break;
		}
	}while(opc != 4);
	return 0;
}
//funciones secundarias

/*Programa de la primera opcion.
 *entradas: medidas de la habitacion
 *salidas: cantidad de cajas y precio total a pagar*/
void loseta (void)
{
	const float PRECIO = 452.5;
	float largo, ancho;	
	int cajas=0;
	float precio; 
	printf("Calculo del costo que tendra un piso de loseta.\n");	
	printf("Cual es el largo de la habitacion: \n"); scanf(" %f", &largo);
	printf("Cual es el ancho de la habitacion: \n"); scanf(" %f", &ancho);
	cajas = cantcajas (largo, ancho);
	precio = cajas * PRECIO;
	printf("\tLas cajas necesarias para estas medidas son: %d\n", cajas);
	printf("\tEl precio Total a pagar por las cajas es: %.3f\v", precio);
}
int cantcajas (float medida1, float medida2)
{
	const int CAJA = 4;
	int cantidad;
	float area;
	area = medida1 * medida2;
	cantidad = area / CAJA + 1;
	return cantidad;
}

/*Programa de la segunda opcion.
 *entradas: altura, base
 *salida: hipotenusa*/
void rampa (void)
{
	float base, altura, largo;
	printf("Calculo del largo de una rampa.\n");
	printf("Cual es el largo de la base: \n"); scanf(" %f", &base);
	printf("Cual es el largo de la altura: \n"); scanf(" %f", &altura);
	largo = calculo (base, altura);
	printf("\tEl largo de la rampa es: %.3f\v", largo);

}
float calculo (float med1, float med2)
{
	float aux, hipsa;
	aux = med1*med1 + med2*med2;
	hipsa = pow(aux, 0.5);
	return hipsa;
}

/*Programa de la tercera opcion.
 *entradas: horas trabajadas 
 *salida: sueldo*/
void juanita (void)
{
	float horaxdia[6];
	char empleos[6];
	float total = 0;
	printf("Calculo del sueldo semanal de Juanita.\n");
	for(int i=0; i<6;i++){
		printf("Cuantas horas trabajo el dia %d:\n", i+1);
		horaxdia[i] = horas();
		printf("Si la entrada alfabetica no corresponde, el resultado de ese dia sera 0\n");
		printf("En que empleo ? (A, B, C o D) \n");
		scanf(" %c", &empleos[i]);
		total += sueldo(horaxdia[i], empleos[i]);

	}
	for(int i=0; i<6;i++){
		printf("\tEl sueldo del dia %d es: %.2f\n", i+1, sueldo(horaxdia[i], empleos[i]));
	}
	printf("\tEl pago debera ser de: %.3f\v", total);
}
float sueldo (float horas, char empleo)
{
	float trabajo[] = {3.2, 4.1, 3.8, 2.95};
	float sueldo = 0;
	switch (empleo){
		case 'A':
		case 'a':
			sueldo = horas * trabajo[0];
		       	break;
		case 'B':
		case 'b':
			sueldo = horas * trabajo[1];
		       	break;
		case 'C':
		case 'c':
			sueldo = horas * trabajo[2];
		       	break;
		case 'D':
		case 'd':
			sueldo = horas * trabajo[3];
		       	break;

	}
	return sueldo;
}
float horas (void)
{	
	float aux;
	do{
		scanf(" %f", &aux);
		if(aux < 0 || aux > 12)
			printf("Valor fuera de rango. Reintente:\n");
	}while(aux < 0 || aux > 12);
	return aux;
}

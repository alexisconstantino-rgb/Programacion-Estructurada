#include <stdio.h>
#include <math.h>
void terreno (void);
float farea (float ancho, float largo);
float fperimetro (float ancho, float largo);
void heron (void);
float semiperimetro (float a, float b, float c);
float areatrang (float p, float a, float b, float c);

int main (void)
{
	int opc;
	do{
		printf("\t\tMENU\n");
		printf("Opcion 1: Calcular el area y perimetro de un terreno.\nOpcion 2: Area de un triangulo.\nOpcion 3: Salir.\n ");
		scanf(" %d", &opc);
		switch(opc)
		{
			case 1:
				terreno();
				break;
			case 2:
				heron();
				break;
			case 3: 
				printf("Saliendo...\n");
				break;
			default:
				printf("Opcion invalida, reintente.\n");
		}
	}while(opc != 3);
	return 0;
}
/*Problema 1*/
void terreno (void)
{
	float ancho, largo;
	printf("Calculo de un terreno cuyo ancho es tres veces el largo.\n ");
	printf("Escriba el ancho del terreno:\n");
	scanf(" %f", &ancho);
	largo = ancho / 3;
	printf("\nEl area del terreno es de %.4f m^2.\n", farea(ancho, largo));
	printf("\nEl perimetro del terreno es de %.4f m.\n", fperimetro(ancho, largo));
}
//area del terreno
float farea (float ancho, float largo)
{
	float area;
	area = ancho * largo;	
	return area;
}
//perimetro del terreno
float fperimetro (float ancho, float largo)
{
	float perimetro;
	perimetro = 2 * (ancho + largo);
	return perimetro;
}
/*Problema 2*/
void heron (void)
{
	float a, b, c;
	float smper, area;
	printf("Calculo del area de un triangulo por la formula de Heron.\n");
	printf("Lado A:\n"); scanf(" %f", &a);
	printf("Lado B:\n"); scanf(" %f", &b);
	printf("Lado C:\n"); scanf(" %f", &c);
	smper = semiperimetro (a, b, c);
	area = areatrang (smper, a, b, c);
	printf("El area del triangulo es: %.4f\n", area);
}
//perimetro del triangulo
float semiperimetro (float a, float b, float c)
{
	float sperimetro;
	sperimetro = (a+b+c)/2;
	return sperimetro;
}
//area del triangulo
float areatrang (float p, float a, float b, float c)
{
	float area, aux;
	aux = p * (p-a)*(p-b)*(p-c);
	area = pow (aux, 0.5);
	return area;
}

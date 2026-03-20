#include <stdio.h>

//prototipos
int menu (void);
float CelsiusFahrenheit (float celsius);
float FahrenheitCelsius (float fahrenheit);

//main
int main (void)
{
	int opcion;
	float celsius, fahrenheit;
	celsius = fahrenheit = 0;
	do
	{
		printf("Conversion de Temperaturas.\n");
		opcion = menu();
		switch(opcion)
		{
			case 1:
				printf("Celsius a Fahrenheit\n");
				printf("Ingrese los grados Celsius:  ");
				scanf(" %f", &celsius);
				fahrenheit = CelsiusFahrenheit (celsius);
				printf("grados Fahrenheit: %.4f\n", fahrenheit);
				printf("\n");
				break;
			case 2:
				printf("Fahrenheit a Celsius\n");
				printf("Ingrese los grados Fahrenheit:   ");
				scanf(" %f", &fahrenheit);
				celsius = FahrenheitCelsius (fahrenheit);
				printf("grados Fahrenheit: %.4f\n", celsius);
				break;
			case 3:
				printf("Saliendo.\n");
				break;
			default: printf("Elije un valor entre <1 y 3>\n");
		}
	}while(opcion != 3);	
	return 0;	
}

int menu (void)
{
	int opcion=0;
	printf("[1] Celsius a Fahrenheit\n");
	printf("[2] Fahrenheit a Celsius\n");
	printf("[3] Salir\n");
	do
	{
		scanf("%d", &opcion);
		if(opcion < 1 || opcion > 3)
			printf("Opcion invalida, vuelve a intentarlo\n");
	}while(opcion < 1 || opcion > 3);
	return opcion;
}

float CelsiusFahrenheit (float celsius)
{
	float fahrenheit;
	fahrenheit = (9.0/5.0) * celsius + 32;	
	return fahrenheit;
}

float FahrenheitCelsius (float fahrenheit)
{
	float celsius;
	celsius = 5.0/9.0 * (fahrenheit - 32);	
	return celsius;
}	

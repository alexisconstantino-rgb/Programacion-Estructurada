#include <stdio.h>

//prototipos
/*Problema 1*/
void conversion (void);
void conversor (int opc, float *input);
/*Problema 2*/
void encuesta (void);
void conteo (int datos[], int opciones[]);
/*Problema 3*/
void pago (void);
void calAguinaldo (float dias, float sueldo, float *diasagui, float *aguinaldo);
void calPrimaVac (float dias, float sueldo, float *diasvac, float *primavac);
//main
int main(void)
{
	int opc=0;
	do{
		printf("[1] Conversor de moneda\n[2] Encuesta de vacunacion\n[3] Calculo de finiquito\n[4] Salir\n");//menu
		scanf(" %d", &opc);
		switch(opc)
		{
			case 1:
				printf("Conversion de:\n");
				conversion();
				break;
			case 2:
			       	printf("Encuesta de Vacunacion a N personas\n");
				encuesta();
				break;
			case 3:
				printf("Calculo de finiquito\n");
				pago();
				break;
			case 4:
				printf("Saliendo...\n");
				break;
			default: printf("Invalid section\n");
		}
	}while(opc != 4);
	return 0;
}
//Problema 1: Conversion de monedas
void conversion (void)
{
	int opc;
	float input=0;

	printf("[1] Pesos a Yenes\n[2] Pesos a Dolares\n[3] Pesos a Libras Esterlinas\n[4] Pesos a Euros\n");
	scanf("%d", &opc);//opciones
	printf("Ingrese pesos\n"); scanf(" %f", &input);
	conversor(opc, &input);
	printf("Res: %.4f\n", input);
}
void conversor (int opc, float *input)
{
	const float YEN=0.11;
	const float DLL=17.59;
	const float LBE=23.53;
	const float EUR=20.48;
	switch(opc)
	{
			case 1:
				*input = *input / YEN;
				break;
			case 2:
				*input = *input / DLL;
				break;
			case 3:
				*input = *input / LBE;
				break;
			case 4:
				*input = *input / EUR;
				break;
	}
}
//Problema 2: Encuesta de vacunacion
#define PERSONAS 10
#define OPC 5
void encuesta (void)
{
	int datos[PERSONAS] = {5, 3 ,4, 5, 5, 1, 4, 3, 2}; // posibles valores: {1, 2, 3, 4, 5}
	int opciones[OPC]={0};

	conteo (datos, opciones);

	printf("Datos\tCantidad\n --------------\n");
	for(int i=0; i<OPC; i++)
	{
		printf("   %d\t%d\n", i+1, opciones[i]);
	}
}
void conteo (int datos[], int opciones[])
{
	for(int i=0; i<PERSONAS; i++)
	{
		switch (datos[i])
		{
			case 1: opciones[0] ++; break;
			case 2:	opciones[1] ++;	break;
			case 3:	opciones[2] ++;	break;
			case 4:	opciones[3] ++;	break;
			case 5:	opciones[4] ++;	break;
			default: printf("Opcion Invalida.\n");
		}
	}

}
//Problema 3: Calculo de finiquito
void pago (void)
{
	float dias;
	float sueldo, diasvac, diasagui;
	float aguinaldo, primavac, finiquito;
	aguinaldo=primavac=finiquito=diasvac=0;
	printf("Ingrese sueldo diario:\n"); scanf(" %f", &sueldo);//sueldo
	printf("Ingrese dias trabajados\n"); scanf(" %f", &dias);//dias
	calAguinaldo(dias, sueldo, &diasagui, &aguinaldo);
	calPrimaVac (dias, sueldo, &diasvac, &primavac);
    	printf("Aguinaldo:\t %.4f dias.\t=\t%.4f pesos.\n", diasagui, aguinaldo);
	printf("Vacaciones:\t %.4f dias.\t=\t%.4f pesos.\n", diasvac, primavac);
	finiquito = aguinaldo + primavac;
	printf("Finiquito: %.4f\n", finiquito);
}
void calAguinaldo (float dias, float sueldo, float *diasagui, float *aguinaldo)
{
	*diasagui = dias * 15/365;
	*aguinaldo = *diasagui * sueldo;
}
void calPrimaVac (float dias, float sueldo, float *diasvac, float *primavac)
{
	*diasvac = dias * 6/365;
	*primavac = *diasvac * sueldo;//(*diasvac * sueldo) * 0.25;
}

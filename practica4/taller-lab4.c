//Programacion Estructurada
//Alumno: Alexis Roberto Constantino Nunez
#include <stdio.h>

#define PERSONAS 10
#define OPC 5

void resEncuesta (int datos[], int opciones[]);

int main (void)
{
	int datos[PERSONAS] = {1, 5, 3 ,4, 5, 5, 1, 4, 3, 2}; // posibles valores: {1, 2, 3, 4, 5}
	int opciones[OPC]={0};
	
	resEncuesta (datos, opciones);
	
	printf("Datos\tCantidad\n --------------\n");
	for(int i=0; i<OPC; i++)
	{
		printf("   %d\t%d\n", i+1, opciones[i]);
	}
	return 0;
}


void resEncuesta (int datos[], int opciones[])
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


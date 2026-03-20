#include <stdio.h>

int menu (void);

int main (void)
{
	switch(menu())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			printf("HOLA QUE HACE\n");
			break;
		case 5:
			printf("Saliendo\n");
			break;
	}
	return 0;
}


int menu (void)
{
	int opcion=0;
	printf("Opcion No. 1\n");
	printf("Opcion No. 2\n");
	printf("Opcion No. 3\n");
	printf("Opcion No. 4\n");
	printf("Opcion No. 5: Salir\n");
	do{
		scanf("%d", &opcion);
		if(opcion < 1 || opcion > 5)
			printf("Invalid Option, try again   ");
	}while(opcion < 1 || opcion > 5);
	return opcion;
}

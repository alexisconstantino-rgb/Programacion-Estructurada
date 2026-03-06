#include <stdio.h>
//def's
//#define ESTUDIANTES 100

//prototipos

//main
int main(void)
{
	float estudiantes;
	float promedio, calfalta, calfbaja;
	float estudiantesap, estududiantesrep;
	printf("Presentacion: \n");
	//pedir al usuario la cantidad de estudiantes
	estudiantes = numEstudiantes();
	float calficaciones[estudiantes];
	//pedir la calificacion final de cada estudiante
	registarCalificaciones(calificaciones, estudiantes);
	//calcular estadisticas

	//mostra resultados de: Promedio grupal, Cal mas alta y baja, Num de estudiantes aprobados y reprobados.
	
	return 0;
}
/*TAREA 1*/
//Leer numero de estudiantes
float numEstudiantes(void)
{
	float estudiantes;
	printf("Cantidad de alumnos presentes en el grupo:\t");
	estudiantes = validar(1, 100);
	return estudiantes;
}
/*TAREA 2*/
//Registrar Calificaciones
void registrarCalificaciones(float calificaciones[], float estudiantes)
{
	for (int i=0; i <= estudiantes; i++)
	{
		printf("Ingrese la calificacion del %d^o en la lista de alumnos.\n", i+1 );
		calificaciones[i] = validar(0, 100);
	}
	printf("Registro Copleto\n\n");
}
/*TAREA 3*/
//Promedio del grupo
float promedio (float calificaciones[], float estudiantes)
{
	float output=0;
	for(int i=0; i <= estudiantes; i++)
	{
		output += calificaciones[i];
	}
	return (output / estudiantes);
}
//Calificacion mas alta
float calificacionalta(float calificaciones[], float estudiantes)
{
	float alta=0;
	for(int i=0; i<=estudiantes; i++)
	{
		if(calificaciones[i]>alta)
			alta = calificacion[i];
	}
}
//Calificacion mas baja
float calificacionbaja(float calificaciones[], float estudiantes)
{
	float baja=0;
	for(int i=0; i<=estudiantes; i++)
	{
		if(calificaciones[i]>alta)
			baja = calificacion[i];
	}
}
//Numero de estudiantes aprobados (>=60)

//Numero de estudiantes reprobados (<= 60)

/*TAREA 4: MOSTAR RESULTADOS*/
void resultados ()
{
	int opc;
	do{
		printf("[1]Mostrar Promedio del Grupo.\n[2]Mostar la calificacion mas alta y baja.\n[3]Numero de estudiantes aprobados y reprobados.\n[4]Terminar el programa.\n");
		printf("opcion:\t");
		scanf(" %d", &opc);
		switch(opc)
		{
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
		}

	}while(opc != 4);
}

/*SUBTAREAS*/
float validar (float min, float max)
{	
	float input=0;
	float aux=0;
	do{
		printf("valor (%.1f - %.1f):\t", min, max)
		aux = scanf(" %f", &input)
		if(input <= min || input >= max || aux != 1.0)
			printf("Syntax error, try again\n");
	}while(input <= min || input >= max || aux != 1.0);
	return input;
}

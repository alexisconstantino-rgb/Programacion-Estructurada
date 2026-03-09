#include <stdio.h>

//prototipos
int numEstudiantes(void);
void registrarCalificaciones(float calificaciones[], int estudiantes);
float calpromedio (float calificaciones[], int estudiantes);
float calificacionalta(float calificaciones[], int estudiantes);
float calificacionbaja(float calificaciones[], int estudiantes);
void resultados(float promedio, float calfalta, float calfbaja, int aprobados, int reprobados);
int aprobados (float calificaciones[], int estudiantes);
int reprobados (float calificaciones[], int estudiantes);
float validar(float min, float max);
void cleanbbf (void);
//main
int main(void)
{
	int estudiantes;
	float promedio, calfalta, calfbaja;
	int estudiantesap, estudiantesrep;
	printf("Presentacion: \n");
	//pedir al usuario la cantidad de estudiantes
	estudiantes = numEstudiantes();
	if(estudiantes == 0)
		printf("Sin estudiantes no hay resultados.\n");
	else
	{
		float calificaciones[estudiantes];
		//pedir la calificacion final de cada estudiante
		registrarCalificaciones(calificaciones, estudiantes);
		//calcular estadisticas
		promedio = calpromedio(calificaciones, estudiantes);
		calfalta = calificacionalta(calificaciones, estudiantes);
		calfbaja = calificacionbaja(calificaciones, estudiantes);
		estudiantesap = aprobados(calificaciones, estudiantes);
		estudiantesrep = reprobados(calificaciones, estudiantes);
		//mostra: Promedio grupal, Cal mas alta y baja, Num estudiantes aprobados y reprobados.
		resultados (promedio, calfalta, calfbaja, estudiantesap, estudiantesrep);	
	}
	return 0;
}
/*TAREA 1*/
//Leer numero de estudiantes
int numEstudiantes(void)
{
	int estudiantes;
	printf("Cantidad de alumnos presentes en el grupo\n");
	estudiantes = validar(0, 100);
	return estudiantes;
}
/*TAREA 2*/
//Registrar Calificaciones
void registrarCalificaciones(float calificaciones[], int estudiantes)
{
	for (int i=0; i < estudiantes; i++)
	{
		printf("Calificacion del %d^o en la lista de alumnos:\n", i+1 );
		calificaciones[i] = validar(0, 100);
		printf("\n");
	}
	printf("Registro Copleto\n\n");
}
/*TAREA 3*/
//Promedio del grupo
float calpromedio (float calificaciones[], int estudiantes)
{
	float output=0;
	for(int i=0; i < estudiantes; i++)
	{
		output += calificaciones[i];
	}
	return (output / estudiantes);
}
//Calificacion mas alta
float calificacionalta(float calificaciones[], int estudiantes)
{
	float alta=calificaciones[0];
	for(int i=0; i<estudiantes; i++)
	{
		if(calificaciones[i]>alta)
			alta = calificaciones[i];
	}
	return alta;
}
//Calificacion mas baja
float calificacionbaja(float calificaciones[], int estudiantes)
{
	float baja=calificaciones[0];
	for(int i=0; i<estudiantes; i++)
	{
		if(calificaciones[i] < baja)
			baja = calificaciones[i];
	}
	return baja;
}
//Numero de estudiantes aprobados (>=60)
int aprobados(float calificaciones[], int estudiantes)
{
	float count=0;;
	for(int i=0; i<estudiantes; i++)
	{
		if(calificaciones[i] >= 60)
			count ++;
	}
	return count;
}	
//Numero de estudiantes reprobados (<= 60)
int reprobados(float calificaciones[], int estudiantes)
{
	float count=0;;
	for(int i=0; i<estudiantes; i++)
	{
		if(calificaciones[i] < 60)
			count ++;
	}
	return count;
}	
/*TAREA 4: MOSTAR RESULTADOS*/
void resultados (float promedio, float calfalta, float calfbaja, int aprobados, int reprobados)
{
	int opc;
	do{
		printf("[1]Mostrar Promedio del Grupo.\n[2]Mostar la calificacion mas alta y baja.\n[3]Numero de estudiantes aprobados y reprobados.\n[4]Terminar el programa.\n");
		printf("opcion:\t");
		scanf(" %d", &opc);
		switch(opc)
		{
			case 1:	printf("Promedio grupal: %.2f\n", promedio);
			       	break;
			case 2: printf("Calficacion mas alta: %.2f\n", calfalta);
				printf("Calificacion mas baja: %.2f\n", calfbaja);
				break;
			case 3: printf("Cantidad de aprobados: %d\n", aprobados);
				printf("Cantidad de reprobados: %d\n", reprobados);
				break;
			case 4: printf("Saliendo..\n"); break;
			default: printf("Opcion Invalida, try again.\n");
		}
	printf("\n");
	}while(opc != 4);
}
/*SUBTAREAS*/
float validar (float min, float max)
{	
	float input=0;
	int aux=0;
	do{
		printf("El valor debe estar entre %.1f - %.1f :\t", min, max);
		aux = scanf(" %f", &input);
		if(input < min || input > max || aux != 1){
			printf("Syntax error, try again\n");
			cleanbbf();
		}
	}while(input < min || input > max || aux != 1);
	return input;
}
void cleanbbf (void)
{
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}

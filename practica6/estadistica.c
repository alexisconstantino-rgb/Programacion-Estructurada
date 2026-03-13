#include "estadistica.h"

float calcularPromedio (float calificaciones[], int n)
{
	float output=0;
	for(int i=0; i < n; i++)
	{
		output += calificaciones[i];
	}
	return (output / n);
}
//Calificacion mas alta
float obtenerMayor(float calificaciones[], int n)
{
	float alta=calificaciones[0];
	for(int i=0; i<n; i++)
	{
		if(calificaciones[i]>alta)
			alta = calificaciones[i];
	}
	return alta;
}
//Calificacion mas baja
float obtenerMenor(float calificaciones[], int n)
{
	float baja=calificaciones[0];
	for(int i=0; i<n; i++)
	{
		if(calificaciones[i] < baja)
			baja = calificaciones[i];
	}
	return baja;
}
//Numero de estudiantes aprobados (>=60)
int contarAprobados(float calificaciones[], int n)
{
	float count=0;;
	for(int i=0; i<n; i++)
	{
		if(calificaciones[i] >= 60)
			count ++;
	}
	return count;
}	
//Numero de estudiantes reprobados (<= 60)
int contarReprobados(float calificaciones[], int n)
{
	float count=0;;
	for(int i=0; i<n; i++)
	{
		if(calificaciones[i] < 60)
			count ++;
	}
	return count;
}	

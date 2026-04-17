#include <stdio.h>

#define TAM 10
typedef int vector[TAM];

void llenarVector(vector X);
void mostrarVector(vector X);

int main(void)
{
	vector A, B, R;
	llenarVector(A);
	mostrarVector(A);
	return 0;	
}
void llenarVector(vector X)
{
	int i;
	for(i=0;i<TAM;i++){
		printf("valor de la pos %d:   ",i+1);
		scanf(" %d", &X[i]);
	}
}
void mostrarVector(vector X)
{
	int i;
	for(i=0;i<TAM;i++){
		printf("valor de la pos %d:   %d\n",i+1, X[i]);
	}
}


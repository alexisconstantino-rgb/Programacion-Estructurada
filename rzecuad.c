//programa para calcular las raices de una ecuacion cuadratica
//formula = x1/x2 = (-b +- (b**2 - 4ac)**0.5)/(2a)
#include <stdio.h>
#include <math.h>

void raices (float a, float b, float c);

int main (void){
  float a=0, b=0, c=0;
  int opc;
  printf("El actual programa permitira calcular las raices de una ecuacion cuadratica.\n");
  do{ 
	  printf("Una ecuacion cuadratica tiene la forma: ax^2 + bx + c\n");
	  printf("Escribe el valor de a:\n"); scanf(" %f", &a);
	  printf("Escribe el valor de b:\n"); scanf(" %f", &b);
	  printf("Escribe el valor de c:\n"); scanf(" %f", &c);
  	  raices(a, b, c);
	  printf("Repetir? (1=>Si\t2=>No)\n"); scanf("%d", &opc);
  }while(opc == 1);
  return 0;
}

void raices (float a, float b, float c)
{
  float r1=0, r2=0;//raices
  float i1=0, i2=0;//parte imaginaria
  float discr;
  if(a == 0){//Ecuacion de primer grado
  	if(b != 0)
		r1 = -c/b;
	else
		printf("Solucion Trivial");
  }//fin if
  else{
  	discr = (b*b) - (4*a*c);
	if (discr >= 0){//Dos raices reales
		printf("Raices Reales\n");
		r1 = (-b + sqrt(discr))/(2*a);
		r2 = (-b - sqrt(discr))/(2*a);
	}//fin if anidado
	else{//Dos raices complejas
	     	printf("Raices Complejas\n");
		r1 = -b/(2*a);
		r2 = r1;
		i1 = sqrt(fabs(discr))/(2*fabs(a));
		i2 = -i1;
	}//fin else anidado
  }//fin else 
  printf("Parte REAL:\t\t"); printf("r1 : %.3f\tr2 : %.3f\n", r1, r2);
  printf("Parte IMAGINARIA:\t"); printf("i1 : %.3f\ti2 : %.3f\n", i1, i2);

}

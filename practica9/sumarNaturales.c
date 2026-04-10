#include <stdio.h>

int sumar(int n);

int main(void)
{
	int num[5]={8,5,3,0,10};
	int i;
	for(i=0;i<5;i++){
		printf("La suma de los numero naturales de %d es : %d\n", num[i], sumar(num[i]));
	}
	return 0;
}

int sumar(int n)
{
	if(n<=1){
		return n;
	}
	else{
		return (n + sumar(n-1));
	}
}

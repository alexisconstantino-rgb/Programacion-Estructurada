#include <stdio.h>

long factorial(int n);

int main(void)
{
	int num[4] = {5,0,2,9};
	int i;
	for(i=0;i<4;i++){
		printf("Factorial de %d : %ld\n ", num[i] , factorial(num[i]));
	}
	return 0;
}
long factorial(int n)
{
	if(n<=1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}

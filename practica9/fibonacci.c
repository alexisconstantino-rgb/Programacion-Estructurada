#include <stdio.h>

long fibonacci(int n);

int main(void)
{
	printf("El fibonacci de 6 es: %li",fibonacci(6));//deberia salir 8
	return 0;
}

long fibonacci(int n)
{
	if(n<=1){
		return n;
	}
	else{
		return fibonacci(n-2) + fibonacci(n-1);
	}
}

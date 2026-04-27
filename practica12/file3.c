#include <stdio.h>

int var3 ;
static int var33 = 33;
static void fun3(void);

void fun3a(void){
	printf("func3a\n");
	fun3();
}

static void fun3(void){
	printf("fun3\n");
}

void fun33(void){
	printf("fun33\n");
}

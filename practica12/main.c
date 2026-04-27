#include <stdio.h>
#include "file1.h"
#include "file2.h"
#include "file3.h"

int main (void)
{
	printf("var1a = %d\n", var1);
	var1 = 20;
	fun3a();
	printf("\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	int arreglo[5];
	int *iPtr;
	int i;

	arreglo[0]=1;
	arreglo[1]=2;
	arreglo[2]=3;
	arreglo[3]=4;
	arreglo[4]=5;

	iPtr=&arreglo[0];

	for (int i = 0; i < 5; ++i)
	{
		printf("*iPtr es %d\n",*iPtr );
		iPtr++;
	}

	return 0;
}
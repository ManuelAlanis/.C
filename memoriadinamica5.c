#include <stdio.h>
#include <stdlib.h>

int main()
{
	int iTam=7;
	int *iArreglo=NULL;

	iArreglo=calloc(10,sizeof(int));

	for (int i = 0; i <13; ++i)
	{
		iArreglo[i]=i+1;
		printf("%d\n",iArreglo[i]);
	}
	free(iArreglo);
	return 0;
}
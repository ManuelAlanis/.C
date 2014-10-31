#include <stdio.h>
#include <stdlib.h>

int main()
{
	int iTam=7;
	int *iArreglo=NULL;

	iArreglo=calloc(iArreglo,sizeof(int));

	for (int i = 0; i < iTam; ++i)
	{
		iArreglo[i]=i+1;
		printf("%d\n",iArreglo[i]);
	}
	free(iArreglo);
	return 0;
}
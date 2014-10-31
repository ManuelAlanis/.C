#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *iArreglo;
	int i, iTam=9;
	iArreglo=malloc(iTam*sizeof(int));
	for (int i = 0; i < iTam; ++i)
	{
		iArreglo[i]=i+1;
		printf("%d ",iArreglo[i] );
	}
	free(iArreglo);
	iArreglo=NULL;
	return 0;
}
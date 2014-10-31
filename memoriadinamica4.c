#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int *iArreglo=NULL;
	int i, iTam;
	printf("¿Tamaño del arreglo a crear?\n");
	scanf("%d",&iTam);
	iArreglo=malloc(iTam*sizeof(int));
	for (i = 0; i < iTam; i++)
	{
		iArreglo[i]=i+1;
		printf("%d\n",iArreglo[i]);
	}
	printf("Nuevo tamaño para el arreglo?\n");
	scanf("%d",&iTam);
 	iArreglo=(int*)calloc(iArreglo,iTam*sizeof(int));
 	for (i = 0; i < iTam; ++i)
 	{
 		iArreglo[i]=i+1;
 		printf("%d\n",iArreglo[i] );
 	}
 	free(iArreglo);
	return 0;
}
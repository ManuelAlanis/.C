#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *sCadena;
	int i;
	sCadena=malloc(80);
	if (!sCadena)
	{
		printf("¡ La asignación fallo !\n");
	} else printf("Asignación satisfactoria\n");
	gets(sCadena);
	for (i=0 ; i <strlen(sCadena) ; i++)
	{
		printf("%c\n",sCadena[i] );
	}
	sCadena=malloc(100);
	if (!sCadena)
	{
		printf("¡ La asignación fallo !\n");
	} else printf("Asignación satisfactoria\n");
	gets(sCadena);
	for (i=0 ; i <strlen(sCadena) ; i++)
	{
		printf("%c\n",sCadena[i] );
	}


	free(sCadena);
	return 0;
}
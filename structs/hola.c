#include <stdio.h>

int main()
{
	char *nombre;
	
	printf("Como te llamas?");
	scanf("%s",nombre);
	printf("Hola %s\n",nombre );
	return 0;
}
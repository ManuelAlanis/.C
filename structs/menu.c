#include <stdio.h>

int main()
{
	int opcion;
	int bandera=0;
	printf("MENu switch\n");
	do
	{
	printf("[1] \n");
	printf("[2] \n");
	printf("[3] Salir\n");
	scanf("%d",&opcion);
	switch(opcion)
		{
			case 1:
				printf("Primera opcion :O!\n");
				break;
		
				case 2:
				printf("Segunda opcion D: \n");
				break;
		
				case 3:
				printf("Bye :(\n");
				bandera=1;
				break;
		}

	} while (bandera==0);
	return 0;
}
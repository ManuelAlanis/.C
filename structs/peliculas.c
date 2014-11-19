#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Peliculas
{
	char *titulo;
	char *nombre;
};

int main()
{	int i;
	char *temporal;
	int npelicula=0;
	int opcion;
	int bandera=0;
	

	struct Peliculas *pelicula[4];
	

	for (int i = 0; i < 4; ++i)
	{
		pelicula[i]=(struct Peliculas*) malloc(sizeof(struct Peliculas));
	}

	do
	{
		printf("[1] Agregar peli\n");
		printf("[2] Ver     peli\n");
		printf("[3] Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
			npelicula++;
			case 1:
			printf("titulo?\n");
			scanf("%s",temporal);
			printf("%s\n",temporal);
			for (int i = 0; i < 4; ++i)
			{
				pelicula[i]->titulo=temporal;
			}

			break;


			case 2:
			for (int i = 0; i < 4; ++i)
			{
				printf("%s\n",pelicula[i]->titulo);
			}
			break;


			case 3:
			bandera=1;
			break;


		}



	} while (bandera==0);





	return 0;
}
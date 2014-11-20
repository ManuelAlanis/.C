#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Peliculas
{
	char *titulo;
	char *actores;
};	
int main()
{	int i;
	char *temporal;
	int npelicula=0;
	int opcion;
	int bandera=0;
	int nactores;
	char *actores;
	
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
			
			case 1:
			
			// printf("titulo?\n");
			// scanf("%s",temporal);
			// printf("%s\n",temporal);
			pelicula[npelicula]->titulo="manuel";
			npelicula++;
			pelicula[npelicula]->titulo="arturo";
			npelicula++;
			pelicula[npelicula]->titulo="wendy";
			printf("Cuantos actores?\n");
			scanf("%d",&nactores);
			printf("Escribiras %d actores\n",nactores);
			actores=malloc(nactores*sizeof(char));
			for (int i = 0; i < nactores; ++i)
			{
				printf("Actor No.%d\n",i+1);
				scanf("%s",&actores[i]);

			}

			// iArreglo=malloc(iTam*sizeof(int));
			break;
			
			case 2:
				printf("%s\n",pelicula[0]->titulo);
				printf("%s\n",pelicula[1]->titulo);
				printf("%s\n",pelicula[2]->titulo);
				// printf("%s\n",arregloactores[0] );
				// printf("%s\n",arregloactores[1] );
				// printf("%s\n",arregloactores[2] );
				// printf("%s\n",arregloactores[3] );
			break;


			case 3:
			bandera=1;
			break;
		}
	} while (bandera==0);
	return 0;
}
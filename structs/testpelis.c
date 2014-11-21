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
	
	struct Peliculas *pelicula;
	printf("Guardar pelis\n");
	// scanf("%d",&npelicula);

	do
	{
   		printf("[1] Agregar peli\n");
		printf("[2] Ver     peli\n");
		printf("[3] Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
			
			case 1:
			
if (npelicula==0)
			{
				pelicula=(struct Peliculas*) malloc(sizeof(struct Peliculas));
			}else		
// pelicula=(struct Peliculas*) realloc(pelicula,(npelicula+1)*sizeof(struct Peliculas));
			
			pelicula[0].titulo = malloc(1*sizeof(char));
			pelicula[1].titulo = malloc(1*sizeof(char));
			printf("titulo?\n");
			scanf("%s",temporal);
			printf("temporal: %s\n",temporal);

			pelicula[npelicula].titulo=temporal;
			printf("%s\n",pelicula[npelicula].titulo);
			npelicula++;
			// pelicula[0].titulo="Peeeeliiiionee";
			// printf("Cuantos actores?\n");
			// scanf("%d",&nactores);
			// printf("Escribiras %d actores\n",nactores);
			// actores=malloc(nactores*sizeof(char));
			
			// for (int i = 0; i < nactores; ++i)
			// {
			// 	printf("Actor No.%d\n",i+1);
			// 	scanf("%s",&actores[i]);

			// }
			// for (int i = 0; i < nactores; ++i)
			// {
			// 	// printf("%s\n",actores[i]);
			// }
			// iArreglo=malloc(iTam*sizeof(int));
			break;
			
			case 2:
				
				// for (int i = 0; i < npelicula; ++i)
				// {
					printf("Pelicula %d: %s\n",i,pelicula[0].titulo);
					printf("Pelicula %d: %s\n",i,pelicula[1].titulo);
				// }
				
				// printf("%s\n",pelicula[1]->titulo);
				// printf("%s\n",pelicula[2]->titulo);
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
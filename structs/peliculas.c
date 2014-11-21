#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
char *titulo;
char *director;
char **actores;
int  *año;
int  numeroactores;
}Peliculas;


int main(void)
{
	int i;
	int npeliculas=0;
	int opcionmenu;
	int bandera=0;
	int posicionpeliculas=0;
	Peliculas **producto = NULL;
	int iCol=1;
	int iRen=1;
	int numeroactores=0;
	printf("Peliculas ?\n");
	// scanf("%d",&npeliculas);
	// producto = (Peliculas**)realloc(producto, npeliculas * sizeof(Peliculas*));
	// for (int i = 0; i < npeliculas; ++i)
	// {
	// 	producto[i] = (Peliculas*)malloc(sizeof(Peliculas));
	// }

	do
	{
	printf("[1] Pelicula\n");
	printf("[2] Ver Peliculas\n");
	printf("[3] Salir\n");
	scanf("%d",&opcionmenu);
	switch(opcionmenu)
	{
		case 1:
		npeliculas++;
		producto = (Peliculas**)realloc(producto, npeliculas * sizeof(Peliculas*));
		producto[posicionpeliculas] = (Peliculas*)malloc(sizeof(Peliculas));
		printf("Titulo: ");
		producto[posicionpeliculas]->titulo=malloc(1);
		producto[posicionpeliculas]->año=malloc(1);
		producto[posicionpeliculas]->director=malloc(1);
		
		scanf("%s",producto[posicionpeliculas]->titulo);
		printf("ingrese el año\n");
		scanf("%d",producto[posicionpeliculas]->año);
		printf("ingrese el nombre del director\n");
		scanf("%s",producto[posicionpeliculas]->director);
		
		printf("Cuantos actores hay?\n");
		scanf("%d",&numeroactores);
		
	    
		

    producto->actores = (char**) malloc(numeroactores*sizeof(char*));
    for (int i=0; i<numeroactores; i++)
    {
        producto->actores[i] = (char*) malloc(40*sizeof(char));
    }
	    for (int i = 0; i < numeroactores; ++i)
	    {
	    	// *producto[i]->actores="pedro";
	    	// printf("Actor No.%d\n",i);
	    	// scanf("%s",actores[i]);
	    	// printf("%s\n",producto->actores[i] );
	    }
		// if (producto.actores)
		// {
		// 	printf("Memoria asignada\n");
		// }
		posicionpeliculas++;
		break;
		
		case 2:
		for (int i = 0; i <3; ++i)
		{
			printf("Pelicula : %s\n",producto[i]->titulo);
			printf("año: %d\n",*producto[i]->año);
			printf("director: %s\n",producto[i]->director);
			// for (int i = 0; i < numeroactores; ++i)
			// {
			// 	printf("%s\n",nombreactores[i] );
			// }
		}
		break;
        
		case 3:
		bandera=1;
		break;
	}
	} while (bandera==0);
	// for(i=0;i<npeliculas;i++)
	// {
	// printf("titulo: %s, año: %d\n",producto[i]->titulo,producto[i]->año);
	// }
	// for(i=0;i<npeliculas;i++)
	// {
	// free(producto[i]);
	// }
	// free(producto);
return 0;
}
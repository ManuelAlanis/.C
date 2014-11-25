#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

typedef struct
{
	char *titulo;
	char *director;
	char **actores;
	int  *año;
	int  ID;
	int  ren;
	int  col;
}Peliculas;


int main(void)
{
	int i;
	int npeliculas=0;
	int opcionmenu;
	int bandera=0;
	int posicionpeliculas=0;
	Peliculas **producto = NULL;
	do
	{
	menuprincipal();
	scanf("%d",&opcionmenu);
	switch(opcionmenu)
	{
		case 1:
		npeliculas++;//para aumentar el numero total de peliculas generadas		
		producto = (Peliculas**)realloc(producto, 10 * sizeof(Peliculas*));
		producto[posicionpeliculas] = (Peliculas*)malloc(sizeof(Peliculas));
		memorianuevapelicula(producto,posicionpeliculas,npeliculas);
		posicionpeliculas++; 
		break;
		case 2:
		seleccionapelicula(producto,posicionpeliculas);
		break;
		case 3:
		bandera=1; break;
	}
	} while (bandera==0);
 	liberarmemoria(producto,npeliculas,i); 
return 0;
}

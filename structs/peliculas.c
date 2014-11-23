#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char *titulo;
	char *director;
	char **actores;
	int  *año;
	int ren;
	int col;
}Peliculas;

char** crearMatriz(int iRen, int iCol)
{
    char **fRen = (char**) malloc(iRen*sizeof(char*));
    for (int i=0; i<iRen; i++)
    {
        fRen[i] = (char*) malloc(iCol*sizeof(char));
    }
    return fRen;
}
void llenarMatriz(char **mat, int iRen, int iCol)
{
    char *nombre="Manuel";
    
    for(int i=0;i<iRen;i++)
 {
 for(int j=0;j<iCol;j++)
 {
 	printf("Actor No.%d\n",iCol );
 	scanf("%s",mat[i]);
 	printf("%s\n",mat[i] );
 }
 }
}
void imprimirMatriz(char **mat, int iRen, int iCol)
{
 for(int i=0;i<iRen;i++)
 {
 for(int j=0;j<iCol;j++)
 {
 printf("Actor No.%d: %s \n",i,mat[i]);
 }
 printf("\n");
 }
}
void destruirMatriz(char **mat, int iRen)
{
    for(int i=0;i<iRen;i++)
 {
 free(mat[i]);
 }
 free(mat);
}
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
	printf("Programa peliculas xd \n");
	
	// memset?

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
		scanf("%d",&producto[0]->col );
		
	   
producto[0]->ren = 1;
// producto[0]->col = 1;
producto[0]->actores = crearMatriz(producto[0]->ren, producto[0]->col);
 
llenarMatriz(producto[0]->actores,producto[0]->ren, producto[0]->col);

	   
	   printf( "\n" );
	   
		// if (producto.actores)
		// {
		// 	printf("Memoria asignada\n");
		// }
		posicionpeliculas++;
		break;
		
		case 2:
		printf("______________________\n");
		printf("______PELICULAS_______\n");
		for (int i = 0; i <posicionpeliculas; ++i)
		{
			printf("Pelicula : %s\n",producto[i]->titulo);
			printf("año: %d\n",*producto[i]->año);
			printf("director: %s\n",producto[i]->director);
			imprimirMatriz(producto[i]->actores,producto[i]->ren, producto[i]->col);	  	 
			printf("______________________\n");
			printf("______________________\n");
			
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
	
 	
 destruirMatriz(producto[0]->actores,producto[0]->ren);
 free(producto[0]);
 free(producto);
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
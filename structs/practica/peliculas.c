#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "funciones.h"

struct Peliculas
{
	char *titulo;
	char *director;
	char **actores;
	int  *año;
	int  ID;
	int  ren;
	int  col;
};

char** crearMatriz(int iRen, int iCol);
void llenarMatriz(char **mat, int iRen, int iCol);
void imprimirMatriz(char **mat, int iRen, int iCol);
void destruirMatriz(char **mat, int iRen);
void menuimpreso();
void capturapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas);
void memorianuevapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas);
void seleccionapelicula(struct Peliculas **producto,int posicionpeliculas);
void liberarmemoria(struct Peliculas **producto,int npeliculas,int i);
void menuprincipal(struct Peliculas **producto,int npeliculas,int posicionpeliculas,int opcionmenu,int bandera,int i);

int main(void)
{
	int i;
	int npeliculas=0;
	int opcionmenu;
	int bandera=0;
	int posicionpeliculas=0;
	struct Peliculas **producto = NULL;
	menuprincipal(producto,npeliculas,posicionpeliculas,opcionmenu,bandera,i);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** crearMatriz(int iRen, int iCol)
{
    char **fRen = (char**) malloc(iRen*sizeof(char*));
    //char **fRen = (char**)realloc(fRen,iRen*sizeof(char*));
    for (int i=0; i<iRen; i++)
    {
        fRen[i] = (char*) malloc(iCol*sizeof(char));
    }
    return fRen;
}
void llenarMatriz(char **mat, int iRen, int iCol)
{ 
    for(int i=0;i<iRen;i++)
 {
 for(int j=0;j<iCol;j++)
 {
 	printf("Actor No.%d\n",i+1 );
 	scanf("%s",mat[i]);
 }
 }
}
void imprimirMatriz(char **mat, int iRen, int iCol)
{
 for(int i=0;i<iRen;i++)
 {
 for(int j=0;j<iCol;j++)
 {
 printf("Actor No.%d: %s\n",i+1,mat[i]);
 
 }
 // printf("\n");
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

void menuimpreso(){
	printf("[1] Agregar Pelicula\n");
	printf("[2] Imprimir Peliculas\n");
	printf("[3] Salir\n");
}
void capturapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas)
{
		printf("Nombre de la Pelicula? ");
		scanf("%s",producto[posicionpeliculas]->titulo);
		printf("Director? ");
		scanf("%s",producto[posicionpeliculas]->director);
		printf("Año en que salió la película? ");
		scanf("%d",producto[posicionpeliculas]->año);
		printf("Cuantos actores hay? ");
		scanf("%d",&producto[posicionpeliculas]->ren);
		producto[posicionpeliculas]->col =1;
        producto[posicionpeliculas]->actores = crearMatriz(producto[posicionpeliculas]->ren, producto[posicionpeliculas]->col);
        producto[posicionpeliculas]->ID=npeliculas;
        llenarMatriz(producto[posicionpeliculas]->actores,producto[posicionpeliculas]->ren, producto[posicionpeliculas]->col);
        printf("\n");
}
void memorianuevapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas)
{
		producto[posicionpeliculas]->titulo=(char*)malloc(10*sizeof(char));
		producto[posicionpeliculas]->año=malloc(1);
		producto[posicionpeliculas]->director=malloc(10);
		producto[posicionpeliculas]->ren=(int)malloc(10*sizeof(int));
		producto[posicionpeliculas]->ID=(int)malloc(1*sizeof(int));
		capturapelicula(producto,posicionpeliculas,npeliculas);
}
void seleccionapelicula(struct Peliculas **producto,int posicionpeliculas)
{
	int bandera2=0;
	int op2;
	system("clear");
	printf("______________________\n");
		printf("______PELICULAS_______\n");
		do
		{
			printf("ID\tTITULO\n");
			for (int i = 0; i < posicionpeliculas; ++i)
			{
				printf("[%d]\t%s\n",producto[i]->ID,producto[i]->titulo);
			}
			scanf("%d",&op2);
			op2=op2-1;
			printf("ID: 00%d\n",producto[op2]->ID);
			printf("Pelicula : %s\n",producto[op2]->titulo);
			printf("año: %d\n",*producto[op2]->año);
			printf("director: %s\n",producto[op2]->director);
			imprimirMatriz(producto[op2]->actores,producto[op2]->ren, producto[op2]->col);	  	 
			printf("______________________\n");
			printf("- - - - - - - - - - - \n");
			bandera2=1;
		} while (bandera2==0);

}
void liberarmemoria(struct Peliculas **producto,int npeliculas,int i)
{	
	for (int i = 0; i < npeliculas; ++i)
	{
		destruirMatriz(producto[i]->actores,producto[i]->ren);
	}
	for(i=0;i<npeliculas;i++)
	{
	free(producto[i]);
	printf("Pelicula %d liberada | ",i );
	}
	free(producto);	
}
void menuprincipal(struct Peliculas **producto,int npeliculas,int posicionpeliculas,int opcionmenu,int bandera,int i)
{
	do
	{
	menuimpreso();
	scanf("%d",&opcionmenu);
	switch(opcionmenu)
	{
		case 1:
		npeliculas++;//para aumentar el numero total de peliculas generadas		
		producto = (struct Peliculas**)realloc(producto, 10 * sizeof(struct Peliculas*));
		producto[posicionpeliculas] = (struct Peliculas*)malloc(sizeof(struct Peliculas));
		printf("Siguiente\n");
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
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 	printf("Actor No.%d\n",iCol );
 	scanf("%s",mat[i]);
 	//gets(mat[i]);
 	
 	//printf("%s\n",mat[i] );
 }
 }
}
void imprimirMatriz(char **mat, int iRen, int iCol)
{
 for(int i=0;i<iRen;i++)
 {
 for(int j=0;j<iCol;j++)
 {
 printf("Actor No.%d: %s\n",i,mat[i]);
 
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

int main(void)
{
	char *var;
	int i;
	int npeliculas=0;
	int opcionmenu;
	int bandera=0;
	int posicionpeliculas=0;
	int renglones;
	Peliculas **producto = NULL;
    
	int iCol=1;
	int iRen=1;
	int numeroactores=0;

	int bandera2=0;
	int op2;
	printf("Programa peliculas xd \n");
	do
	{
	printf("[1] Agregar Pelicula\n");
	printf("[2] Imprimir Peliculas\n");
	printf("[3] Salir\n");
	scanf("%d",&opcionmenu);
	switch(opcionmenu)
	{
		case 1:
		npeliculas++;
		producto = (Peliculas**)realloc(producto, npeliculas * sizeof(Peliculas*));
		
		producto[posicionpeliculas] = (Peliculas*)malloc(sizeof(Peliculas));
		
		producto[posicionpeliculas]->titulo=(char*)malloc(10*sizeof(char));
		producto[posicionpeliculas]->año=malloc(1);
		producto[posicionpeliculas]->director=malloc(10);
		producto[posicionpeliculas]->ren=(int)malloc(10*sizeof(int));
		producto[posicionpeliculas]->ID=(int)malloc(1*sizeof(int));
		
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
	   
	
		posicionpeliculas++;
		break;
		
		case 2:
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


		break;
        
		case 3:
		bandera=1;
		break;
	}
} while (bandera==0);
 	
 destruirMatriz(producto[0]->actores,producto[0]->ren);
 free(producto[0]);
 free(producto);
	/* for(i=0;i<npeliculas;i++)
	{
	 printf("titulo: %s, año: %d\n",producto[i]->titulo,producto[i]->año);
	}
	for(i=0;i<npeliculas;i++)
	{
	free(producto[i]);
	}
	free(producto);*/
return 0;
}
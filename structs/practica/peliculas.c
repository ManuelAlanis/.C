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
 	printf("Actor No.%d\n",i+1 );
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

void menuprincipal(){
	printf("[1] Agregar Pelicula\n");
	printf("[2] Imprimir Peliculas\n");
	printf("[3] Salir\n");
}

void memorianuevapelicula(Peliculas **producto,int posicionpeliculas)
{
		producto[posicionpeliculas]->titulo=(char*)malloc(10*sizeof(char));
		producto[posicionpeliculas]->año=malloc(1);
		producto[posicionpeliculas]->director=malloc(10);
		producto[posicionpeliculas]->ren=(int)malloc(10*sizeof(int));
		producto[posicionpeliculas]->ID=(int)malloc(1*sizeof(int));

}


void capturapelicula(Peliculas **producto,int posicionpeliculas,int npeliculas)
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


void seleccionapelicula(Peliculas **producto,int posicionpeliculas,int op2,int bandera2)
{
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

void liberarmemoria(Peliculas **producto,int posicionpeliculas,int i)
{	
	for (int i = 0; i < posicionpeliculas; ++i)
	{
			destruirMatriz(producto[i]->actores,producto[i]->ren);
	}

	for(i=0;i<posicionpeliculas;i++)
	{
	free(producto[i]);
	}
	free(producto);	
}

int main(void)
{
	int i;
	// int npeliculas=0;
	int opcionmenu;
	int bandera=0;
	int posicionpeliculas=0;
	int numeroactores=0;
	Peliculas **producto = NULL;
	int bandera2=0;
	int op2;
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
		memorianuevapelicula(producto,posicionpeliculas);
		capturapelicula(producto,posicionpeliculas,npeliculas);
		posicionpeliculas++; break;
		case 2:
		seleccionapelicula(producto,posicionpeliculas,op2,bandera2);
		break;
		case 3:
		bandera=1; break;
	}
} while (bandera==0);
 	liberarmemoria(producto,posicionpeliculas,i); 
return 0;
}
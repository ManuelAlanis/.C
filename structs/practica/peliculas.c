//Pedro Eduardo Guzman Flores 
//Manuel Antonio Alanis Carrillo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void capturarActores(char **mat, int iRen, int iCol);
void imprimirActores(char **mat, int iRen, int iCol);
void destruirMatrizActores(char **mat, int iRen);

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

char** crearMatrizActores(int iRen, int iCol)
{
    char **fRen = (char**) malloc(iRen*sizeof(char*));
    //char **fRen = (char**)realloc(fRen,iRen*sizeof(char*));
    for (int i=0; i<iRen; i++)
    {
        fRen[i] = (char*) malloc(iCol*sizeof(char));
    }
    return fRen;
}
void capturarActores(char **mat, int iRen, int iCol)
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
void imprimirActores(char **mat, int iRen, int iCol)
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
void destruirMatrizActores(char **mat, int iRen)
{
    //liberando memoria para el numero total actores
    //posicion por posicion
    for(int i=0;i<iRen;i++)
 	{
 	free(mat[i]);
 	}
 	free(mat);
}


void capturapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas)
{
		//capturando las cadenas con la variable de control 'posicionpeliculas'
		printf("Nombre de la Pelicula? ");
		scanf("%s",producto[posicionpeliculas]->titulo);
		printf("Director? ");
		scanf("%s",producto[posicionpeliculas]->director);
		printf("Año en que salió la película? ");
		scanf("%d",producto[posicionpeliculas]->año);
		printf("Cuantos actores hay? ");
		//capturando el total deseado de actores;
		scanf("%d",&producto[posicionpeliculas]->ren);
		producto[posicionpeliculas]->col =1;
        //creado una matriz dinamica para el numero total de actores controlada por los renglones de producto[posicionpeliculas]->ren
        producto[posicionpeliculas]->actores = crearMatrizActores(producto[posicionpeliculas]->ren, producto[posicionpeliculas]->col);
        producto[posicionpeliculas]->ID=npeliculas;
        //capturar el numero total de actores deseados por el usuario
        //para la posicion de 'posicionpeliculas', posicion peliculas hace que se almacene en el arreglo siguiente
        capturarActores(producto[posicionpeliculas]->actores,producto[posicionpeliculas]->ren, producto[posicionpeliculas]->col);
        printf("\n");
}
void memorianuevapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas)
{
		//asignacion de memoria para las nuevas posiciones de la estructura
		//con la variable posicion peliculas para controlar las posociones de los arreglos
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
			op2=op2-1;//se realiza la resta para que la opcion seleccionada
			//se convierta en la posicion real del arreglo.
			printf("ID: 00%d\n",producto[op2]->ID);
			printf("Pelicula : %s\n",producto[op2]->titulo);
			printf("año: %d\n",*producto[op2]->año);
			printf("director: %s\n",producto[op2]->director);
			imprimirActores(producto[op2]->actores,producto[op2]->ren, producto[op2]->col);	  	 
			printf("______________________\n");
			printf("- - - - - - - - - - - \n");
			bandera2=1;
		} while (bandera2==0);

}
void liberarmemoria(struct Peliculas **producto,int npeliculas,int i)
{	
	system("clear");
	for (int i = 0; i < npeliculas; ++i)
	{	//liberando todas las posiciones creadas para la matriz de los actores
		//liberacion controlada por el numero de peliculas generadas: npeliculas
		destruirMatrizActores(producto[i]->actores,producto[i]->ren);
	}
	for(i=0;i<npeliculas;i++)
	{
	free(producto[i]);//liberando las posiciones de la estructura generada
	printf("| Pelicula %d liberada | \n",i );
	}
	free(producto);	
}
void menuprincipal(struct Peliculas **producto,int npeliculas,int posicionpeliculas,int opcionmenu,int bandera,int i)
{
	do
	{
	printf("[1] Agregar Pelicula\n");
	printf("[2] Imprimir Peliculas\n");
	printf("[3] Salir\n");
	scanf("%d",&opcionmenu);
	switch(opcionmenu)
	{
		case 1:
		npeliculas++;//para aumentar el numero total de peliculas generadas		
		producto = (struct Peliculas**)realloc(producto, 10 * sizeof(struct Peliculas*));
		producto[posicionpeliculas] = (struct Peliculas*)malloc(sizeof(struct Peliculas));
		//asignando memoria para la nueva pelicula
		memorianuevapelicula(producto,posicionpeliculas,npeliculas);
		//aumentando la posicion de posicionpeliculas, para la posible siguiente vuelta de asignacion
		posicionpeliculas++; 
		break;
		case 2:
		//menu para imprimir y seleccionar las peliculas capturadas con su ID
		seleccionapelicula(producto,posicionpeliculas);
		break;
		case 3:
		bandera=1; break;//bandera de salida
	}
	} while (bandera==0);
 	liberarmemoria(producto,npeliculas,i); 
}



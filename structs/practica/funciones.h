
#ifndef STRUCT_H
#define STRUCT_H
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

char** crearMatriz(int iRen, int iCol);
void llenarMatriz(char **mat, int iRen, int iCol);
void imprimirMatriz(char **mat, int iRen, int iCol);
void destruirMatriz(char **mat, int iRen);
void menuprincipal();
void capturapelicula(Peliculas **producto,int posicionpeliculas,int npeliculas);
void memorianuevapelicula(Peliculas **producto,int posicionpeliculas,int npeliculas);
void seleccionapelicula(Peliculas **producto,int posicionpeliculas);
void liberarmemoria(Peliculas **producto,int npeliculas,int i);


#endif
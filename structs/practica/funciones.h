
#ifndef STRUCT_H
#define STRUCT_H

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
void menuprincipal();
void capturapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas);
void memorianuevapelicula(struct Peliculas **producto,int posicionpeliculas,int npeliculas);
void seleccionapelicula(struct Peliculas **producto,int posicionpeliculas);
void liberarmemoria(struct Peliculas **producto,int npeliculas,int i);


#endif
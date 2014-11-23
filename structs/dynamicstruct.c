#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Matriz
{
 char **m;
 int ren;
 int col;
};
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
 	printf("Actor No.%d\n",iRen );
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
 printf("%s ",mat[i]);
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
 struct Matriz **mat = NULL;
 
 mat = (struct Matriz**)realloc(mat,1*sizeof(struct Matriz*));
 mat[0] = (struct Matriz*)malloc(sizeof(struct Matriz));
 mat[0]->ren = 1;
 mat[0]->col = 1;
 
 mat[0]->m = crearMatriz(mat[0]->ren, mat[0]->col);
 
 llenarMatriz(mat[0]->m,mat[0]->ren, mat[0]->col);
 imprimirMatriz(mat[0]->m,mat[0]->ren, mat[0]->col);
 
 destruirMatriz(mat[0]->m,mat[0]->ren);
 free(mat[0]);
 free(mat);
 
 return 0;
}
#include <stdio.h>
#include <stdlib.h>
float** crearMatriz(int iRen, int iCol);
void llenarMatriz(float **fMat, int iRen, int iCol);
void imprimirMatriz(float **fMat, int iRen, int iCol);
void destruirMatriz(float **fMat, int iRen);
int main(void)
{
	int iRenA = 5; /* Número de Renglones */
	int iColA = 6; /* Número de Columnas  */

	int iRenB = 5; /* Número de Renglones */
	int iColB = 6; /* Número de Columnas  */
    
	printf("------------------------Practica No 2------------------------\n");
	printf("Necesitamos generar dos matrices\n");

      float** fMat = crearMatriz(iRen,iCol);
	  llenarMatriz(fMat,iRen,iCol);
	  imprimirMatriz(fMat,iRen,iCol);
      destruirMatriz(fMat,iRen);
      return 0;
}
float** crearMatriz(int iRen, int iCol)
{
    float **fRen = (float**) malloc(iRen*sizeof(float*));
    for (int i=0; i<iRen; i++)
    {
        fRen[i] = (float*) malloc(iCol*sizeof(float));
    }
    return fRen;
}
void llenarMatriz(float **fMat, int iRen, int iCol)
{
    for(int i=0;i<iRen;i++)
{
for(int j=0;j<iCol;j++)
{
fMat[i][j] = (i*iCol)+j;
}
}
}
void imprimirMatriz(float **fMat, int iRen, int iCol)
{
for(int i=0;i<iRen;i++)
{
for(int j=0;j<iCol;j++)
{
printf("%f ",fMat[i][j]);
}
printf("\n");
}
}
void destruirMatriz(float **fMat, int iRen)
{
    for(int i=0;i<iRen;i++)
{
free(fMat[i]);
}
free(fMat);
}

#include <stdio.h>
#include <stdlib.h>
float** crearMatriz(int iRen, int iCol);
void llenarMatriz(float **fMat, int iRen, int iCol);
void imprimirMatriz(float **fMat, int iRen, int iCol);
void destruirMatriz(float **fMat, int iRen);
float** modificarMatriz(int iRen, int iCol);
int main(void)
{
     int iRen = 3; /* Número de Renglones */
      int iCol = 3; /* Número de Columnas  */
      int resp;
      float** fMat = crearMatriz(iRen,iCol);
      llenarMatriz(fMat,iRen,iCol);
      imprimirMatriz(fMat,iRen,iCol);
      printf("Quieres modificarMatriz?\n");
      scanf("%d",&resp);
      if (resp==1)
      {
      // int iRen = 4;
      // int iCol = 4;
      printf("Numero de renglones?\n");
      scanf("%d",&iRen);
      printf("Numero de Columnas?\n");
      scanf("%d",&iCol);
      float** fMat = modificarMatriz(iRen,iCol);
      llenarMatriz(fMat,iRen,iCol);
      imprimirMatriz(fMat,iRen,iCol);

      }else
      {
      destruirMatriz(fMat,iRen);
       
      return 0; }

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
{ for(int i=0;i<iRen;i++) 
  for(int j=0;j<iCol;j++) 
  fMat[i][j] = (i*iCol)+j; 
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

float**  modificarMatriz(int iRen, int iCol)
{
   float **fRen = (float**) realloc(fRen,iRen*sizeof(float*));
    for (int i=0; i<iRen; i++)
    {
    fRen[i] = (float*) malloc(iCol*sizeof(float));        
    }          
     return fRen;
     int 
     scanfasdf
     asdf
     asdf
     asfd
}

void destruirMatriz(float **fMat, int iRen)
{
   for(int i=0;i<iRen;i++)
      {
           free(fMat[i]);
      }
  free(fMat);
}

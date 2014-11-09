#include <stdio.h>
#include <stdlib.h>
float** crearMatriz(int iRen, int iCol);
void llenarMatriz(float **fMat, int iRen, int iCol);
void imprimirMatriz(float **fMat, int iRen, int iCol);
void destruirMatriz(float **fMat, int iRen);
float**  modificarMatriz(int iRen, int iCol,int niRen, int niCol);
int main(void)
{
      int iRen;
      int iCol;
      int niRen;
      int niCol;
      int resp;
      printf("Bienvenido al sistema de matrices dinamicas\n");
      printf("Creando matriz...\n");
      printf("Numero de renglones?\n");
      scanf("%d",&iRen);
      printf("Numero de Columnas?\n");
      scanf("%d",&iCol);
      float** fMat = crearMatriz(iRen,iCol);
      llenarMatriz(fMat,iRen,iCol);
      imprimirMatriz(fMat,iRen,iCol);
      printf("Quieres modificarMatriz?\n");
      printf("[1] SI\n");
      printf("[2] NO\n");
      scanf("%d",&resp);
      if (resp==1)
      {
        // int iRen = 4;
        // int iCol = 4;
        printf("Numero de renglones?\n");
        scanf("%d",&niRen);
        printf("Numero de Columnas?\n");
        scanf("%d",&niCol);
        float** fMat = modificarMatriz(iRen,iCol,niRen,niCol);        
        llenarMatriz(fMat,niRen,niCol);
        imprimirMatriz(fMat,niRen,niCol);
        printf(" - - - - - - - - - -\n");
        printf("Matriz moficada:\n");
        printf("%d Columnas \n%d Renglones \n",iRen,iCol );
        printf("Good bye\n");
      }else
      {
      printf(" - - - - - - - - - -\n");
      printf("Matriz destruida, memoria liberada\n");
      printf("Good bye\n");
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
                 printf("%.2f ",fMat[i][j]);
            }          
           printf("\n");
      }
}

float**  modificarMatriz(int iRen, int iCol,int niRen, int niCol)
{   
    if (iRen==niRen&&iCol==niCol)
    {
      float **fRen = (float**) realloc(fRen,niRen*sizeof(float*));
      for (int i=0; i<niRen; i++)
      {
      fRen[i] = (float*) malloc(niCol*sizeof(float));        
      }

    }
    
    return iRen;    
}
void destruirMatriz(float **fMat, int iRen)
{
   for(int i=0;i<iRen;i++)
      {
           free(fMat[i]);
      }
  free(fMat);
}

#include <stdio.h>
#include <stdlib.h>
void menu(double **fMat,double **fMatB,int iRenB, int iColB,int iRenA,int iColA);



double** crearMatrizA(int iRenA, int iColA);
double** crearMatrizB(int iRenB, int iColB);

void llenarMatrizA(double **fMat, int iRenA, int iColA);
void llenarMatrizB(double **fMatB, int iRenB, int iColB);

void imprimirMatrizA(double **fMat, int iRenA, int iColA);
void imprimirMatrizB(double **fMatB, int iRenB, int iColB);

void destruirMatrizA(double **fMat, int iRenA);

int main(void)
{
	int iRenA; /* Número de Renglones */
	int iColA; /* Número de Columnas  */
	int iRenB; /* Número de Renglones */
	int iColB; /* Número de Columnas  */
    
	printf("------------------------Practica No 2------------------------\n");
	printf("Necesitamos generar dos matrices\n");
	printf("Matriz A:\n");
	printf("¿Numero de Renglones?\n");
	scanf("%d",&iRenA);
	printf("¿Numero de Columnas?\n");
	scanf("%d",&iColA);
	printf("- - - - - - - - - -\n");
	printf("Matriz B:\n");
	printf("¿Numero de Renglones?\n");
	scanf("%d",&iRenB);
	printf("¿Numero de Columnas?\n");
	scanf("%d",&iColB);
    double** fMat = crearMatrizA(iRenA,iColA);
    llenarMatrizA(fMat,iRenA,iColA);
      
    double** fMatB = crearMatrizB(iRenB,iColB);
	llenarMatrizB(fMatB,iRenB,iColB);
	

	imprimirMatrizA(fMat,iRenA,iColA);
	imprimirMatrizB(fMatB,iRenB,iColB);
    menu( fMat, fMatB, iRenB,  iColB, iRenA, iColA);
    destruirMatrizA(fMat,iRenA);
    
    return 0;
}

void menu(double **fMat,double **fMatB,int iRenB, int iColB,int iRenA,int iColA){
	int bandera=1;
	int opcion;

	do{
	printf("----------OPCIONES:	\n");
	printf("[1] Realizar la multiplicación de matrices\n");
	printf("[2] Realizar la suma de matrices\n");
	printf("[3] Realizar la resta de matrices\n");
	printf("[4] Salir\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	   case 1  :
       printf("OP 1\n");
       
       break;
       case 2  :
       printf("OP 2\n");
       // double **sumfMat = crearMatrizsum(iRenA,iColA,iRenB,iColB);
       // crearMatrizsum(iRenA,iColA,iRenB,iColB);
       // sumallenarMatriz(fMat,fMatB,sumfMat,iRenA,iColA,iRenB,iColB);
       break;
       case 4  :
       bandera=0;
       // statement(s);
       break;
	}

	}while(bandera!=0);
}
//Suma matriz
double** crearMatrizSum(int iRenB, int iColB,int iRenA,int iColA)
{
    if(iRenA==iRenB&&iColA==iColB)
    {
    double **sumfRen = (double**) malloc(iRenB*sizeof(double*));
    for (int i=0; i<iRenB; i++)
    {
        sumfRen[i] = (double*) malloc(iColB*sizeof(double));
    }
    return sumfRen;
	}
else
	{
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -.\n");
	printf("Las matrices no tienen la misma dimensión, no se pueden sumar.\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -.\n");
	} 
}
// void sumallenarMatriz(double **fMat,double **fMatB,double **sumfMat, int iRenA, int iColA,int iRenB, int iColB)
// {
//     // int variable;
// 	printf("Vamos a sumar la matriz\n");
//     for(int i=0;i<iRenA;i++)
// 	{
// 		for(int j=0;j<iColA;j++)
// 		{
// 		// printf("Valor de renglon %d columna%d :",i+1,j+1 );
// 		// scanf("%d",&variable);
// 		sumfMat[i][j] = fMat[i][j]+fMatB[i][j];
// 		}
// 	}
// 	for(int i=0;i<iRenA;i++)
// 	{
// 	for(int j=0;j<iColA;j++)
// 	{
// 	printf("%.0f ",sumfMat[i][j]);
// 	}
// 	printf("\n");
// 	}
// }
//Termina suma matriz

double** crearMatrizB(int iRenB, int iColB)
{
    double **fRen = (double**) malloc(iRenB*sizeof(double*));
    for (int i=0; i<iRenB; i++)
    {
        fRen[i] = (double*) malloc(iColB*sizeof(double));
    }
    return fRen;
}

double** crearMatrizA(int iRenA, int iColA)
{
    double **fRen = (double**) malloc(iRenA*sizeof(double*));
    for (int i=0; i<iRenA; i++)
    {
        fRen[i] = (double*) malloc(iColA*sizeof(double));
    }
    return fRen;
}
void llenarMatrizA(double **fMat, int iRenA, int iColA)
{
    int variable;
	printf("Vamos a llenar la primera matriz\n");
    for(int i=0;i<iRenA;i++)
	{
		for(int j=0;j<iColA;j++)
		{
		printf("Valor de renglon %d columna%d :",i+1,j+1 );
		scanf("%d",&variable);
		fMat[i][j] = variable;
		// fMat[i][j] = (i*iColA)+j;
		}
	}
}
void llenarMatrizB(double **fMatB, int iRenB, int iColB)
{
    int variable;
	printf("Vamos a llenar la segunda matriz\n");
    for(int i=0;i<iRenB;i++)
	{
		for(int j=0;j<iColB;j++)
		{
		printf("Valor de renglon %d columna%d :",i+1,j+1 );
		scanf("%d",&variable);
		fMatB[i][j] = variable;
		// fMat[i][j] = (i*iColA)+j;
		}
	}
}

void imprimirMatrizA(double **fMatB, int iRenA, int iColA)
{
	printf("-----MATRIZ A:\n");
	for(int i=0;i<iRenA;i++)
	{
	for(int j=0;j<iColA;j++)
	{
	printf("%.0f ",fMatB[i][j]);
	}
	printf("\n");
	}
}

void imprimirMatrizB(double **fMat, int iRenB, int iColB)
{
	printf("-----MATRIZ A:\n");
	for(int i=0;i<iRenB;i++)
	{
	for(int j=0;j<iColB;j++)
	{
	printf("%.0f ",fMat[i][j]);
	}
	printf("\n");
	}
}
void destruirMatrizA(double **fMat, int iRenA)
{
    for(int i=0;i<iRenA;i++)
{
free(fMat[i]);
}
free(fMat);
}

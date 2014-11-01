#include <stdio.h>
#include <stdlib.h>
void menu(double **fMat,double **fMatB,int iRenB, int iColB,int iRenA,int iColA);

double** crearMatrizSum(int iRenB, int iColB,int iRenA,int iColA);
void sumMatriz(double **sumfRen,double **fMat,double **fMatB,int iColA,int iRenA);

double** crearMatrizResta(int iRenB, int iColB,int iRenA,int iColA);
void resMatriz(double **resfRen,double **fMat,double **fMatB,int iColA,int iRenA);

double** crearMatrizMulti(int iRenB, int iColB,int iRenA,int iColA);
void multMatriz(double **multfRen,double **fMat,double **fMatB,int iColA,int iRenA);

double** redimencionarMatrizB(double **fRen,int iRenB, int iColB);

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
	double** fMat = crearMatrizA(iRenA,iColA);
    llenarMatrizA(fMat,iRenA,iColA);

	printf("Matriz B:\n");
	printf("¿Numero de Renglones?\n");
	scanf("%d",&iRenB);
	printf("¿Numero de Columnas?\n");
	scanf("%d",&iColB);
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
	int a,b;

	do{
	printf("----------OPCIONES:	\n");
	printf("[1] Realizar la multiplicación de matrices\n");
	printf("[2] Realizar la suma de matrices\n");
	printf("[3] Realizar la resta de matrices\n");
	printf("- - - - - - - - - - - \n");
	printf("[4] Redimencionar Matriz A\n" );
	printf("[5] Redimencionar Matriz A\n" );
	printf("- - - - - - - - - - - \n");
	printf("[6] Salir\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	   case 1:
       printf("Programada multiplicación\n");
	   double **multfRen=crearMatrizMulti(iRenB,iColB,iRenA,iColA);
       if (multfRen==NULL)
       printf("No se puede sumar son de diferente dimensión\n");
       else
       multMatriz(multfRen,fMat,fMatB,iColA,iRenA);
       break;

       case 2:
       printf("OP 2\n");
       double **sumfRen=crearMatrizSum(iRenB,iColB,iRenA,iColA);
       if (sumfRen==NULL)
       printf("No se puede sumar son de diferente dimensión\n");
       else
       sumMatriz(sumfRen, fMat, fMatB, iColA, iRenA);
       break;

       case 3:
       printf("\n");
       double **resfRen=crearMatrizResta(iRenB,iColB,iRenA,iColA);
       if (resfRen==NULL)
       printf("No se puede sumar son de diferente dimensión\n");
       else
		resMatriz(sumfRen, fMat, fMatB, iColA, iRenA);
       break;

       

       case 4:
       printf("Matriz B:\n");
	   printf("¿Numero de Renglones?\n");
	   scanf("%d",&a);
	   printf("¿Numero de Columnas?\n");
	   scanf("%d",&b);
	   break;

	   case 5:
       
       printf("Matriz B:\n");
	   printf("¿Numero de Renglones?\n");
	   scanf("%d",&a);
	   printf("¿Numero de Columnas?\n");
	   scanf("%d",&b);
	   double **fRenB=redimencionarMatrizB(fMatB,a,b);
	   if (fRenB==NULL)
	   {
	   	printf("\n");
	   }else
	   llenarMatrizB(fRenB,a,b);
	   break;

       

       case 6:
       printf("\n");
       bandera=0;
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
	return 0;
	}
}
//..sumando las matrices;
void sumMatriz(double **sumfRen,double **fMat,double **fMatB,int iColA,int iRenA)
{
    int variable;
	printf("\n\n-------SUMANDO LAS MATRICES------\n\n");
    for(int i=0;i<iRenA;i++)
	{
		for(int j=0;j<iColA;j++)
		{
		// printf("",i+1,j+1 );
		variable=fMat[i][j]+fMatB[i][j];
		sumfRen[i][j] = variable;
		}
	}

	for(int i=0;i<iRenA;i++)
	{
		for(int j=0;j<iColA;j++)
		{
		printf("%.2f ",sumfRen[i][j]);
		}
	printf("\n");
	}

}
//Termina suma matriz;


//RESTA matriz

double** crearMatrizResta(int iRenB, int iColB,int iRenA,int iColA)
{
    if(iRenA==iRenB&&iColA==iColB)
    {
	    double **resfRen = (double**) malloc(iRenB*sizeof(double*));
	    for (int i=0; i<iRenB; i++)
	    {
	        resfRen[i] = (double*) malloc(iColB*sizeof(double));
    	}
    	return resfRen;
	}
	else
	{
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -.\n");
	printf("Las matrices no tienen la misma dimensión, no se pueden restar.\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -.\n");
	return 0;
	}
}
//..restando las matrices;
void resMatriz(double **resfRen,double **fMat,double **fMatB,int iColA,int iRenA)
{
    int variable;
	printf("\n\n-------SUMANDO LAS MATRICES------\n\n");
    for(int i=0;i<iRenA;i++)
	{
		for(int j=0;j<iColA;j++)
		{
		// printf("",i+1,j+1 );
		variable=fMat[i][j]-fMatB[i][j];
		resfRen[i][j] = variable;
		}
	}

	for(int i=0;i<iRenA;i++)
	{
		for(int j=0;j<iColA;j++)
		{
		printf("%.2f ",resfRen[i][j]);
		}
	printf("\n");
	}

}

//Termina resta matriz;


//MULTIPLICACION MATRICES;
//validando la creacion de la matriz multiplicación
double** crearMatrizMulti(int iRenB, int iColB,int iRenA,int iColA)
{
    //Dos matrices A y B son multiplicables 
    //comparando si el número de columnas de A coincide con el número de filas de B.
    if(iColA==iRenB)
    {
    printf("Si son iguales\n");
    double **multfRen = (double**) malloc(iRenB*sizeof(double*));
    for (int i=0; i<iColA ; i++)
    {
        multfRen[i] = (double*) malloc(iColB*sizeof(double));
    }
    return multfRen;
	}
	else
	{
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -.\n");
	printf("Los reglones y columnas son diferentes entre si\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -.\n");
	return 0;
	}
}
//multiplicando la matriz
void multMatriz(double **multfRen,double **fMat,double **fMatB,int iColA,int iRenA)
{
	int i, j,k;
	printf("\n\n-------SUMANDO LAS MATRICES------\n\n");
    for(i=0;i<iRenA;i++)
		for(j=0;j<iColA;j++)		
			{
				multfRen[i][j]=0;
				for (k = 0; k < iColA; k++)
				{
					multfRen[i][j]+=fMat[i][k]*fMatB[k][j];
				}
			}
	for(int i=0;i<iRenA;i++)
	{
		for(int j=0;j<iColA;j++)
		{
		printf("%.2f ",multfRen[i][j]);
		}
	printf("\n");
	}

}



/// END MULTIPLICACION MATRICES;


//
double** redimencionarMatrizB(double **fRen,int iRenB, int iColB)
{	
	
	double **temp = (double**) realloc(fRen,iRenB*sizeof(double*));
    for (int i=0; i<iRenB; i++)
    {
    temp[i] = (double*) realloc(fRen[i],iColB*sizeof(double));
    }
    
    if(!temp)printf("La asignacion fallo\n");
    else
   	{printf("asignacion completada\n");
    fRen=temp;
	return fRen;
	}
    return 0;
}

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
	printf("-----MATRIZ B:\n");
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

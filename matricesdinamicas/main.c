#include "milibreria.c"
int main(void)
{
	int iRenA; 
	int iColA;
	int iRenB; 
	int iColB;
    
	printf("------------------------Practica No 2------------------------\n");
	printf("Necesitamos generar dos matrices\n");
	//Otengo renglones y columnas para matriz A
	printf("Matriz A:\n");
	printf("¿Numero de Renglones?\n");
	scanf("%d",&iRenA);
	printf("¿Numero de Columnas?\n");
	scanf("%d",&iColA);
	printf("- - - - - - - - - -\n");
	double** fMat = crearMatrizA(iRenA,iColA);//creo la variable double **fMat con asignacion de memoria de la funcion crearmatrizA
    llenarMatrizA(fMat,iRenA,iColA);
    //Otengo renglones y columnas para matriz B
	printf("Matriz B:\n");
	printf("¿Numero de Renglones?\n");
	scanf("%d",&iRenB);
	printf("¿Numero de Columnas?\n");
	scanf("%d",&iColB);
    double** fMatB = crearMatrizB(iRenB,iColB);//creo la variable double **fMat con asignacion de memoria de la funcion crearmatrizB
	llenarMatrizB(fMatB,iRenB,iColB);
	

	imprimirMatrizA(fMat,iRenA,iColA);
	imprimirMatrizB(fMatB,iRenB,iColB);
    menu( fMat, fMatB, iRenB,  iColB, iRenA, iColA);
    // regresando de menu libero la memoria de las matrices
    destruirMatrizA(fMat,iRenA);
    destruirMatrizB(fMatB,iRenA);
   
    return 0;
}
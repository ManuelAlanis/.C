#include <stdio.h>

struct estudiante
{
	char *nombre;
	int matricula;
}estudiante1,estudiante2;

int main()
{
	estudiante1.nombre="Manuel Alanis";
	estudiante2.matricula=1243445;
	
	printf("Nombre: %s\n",estudiante1.nombre);
	printf("Matricula: %d \n",estudiante2.matricula);
	
	return 0;
}
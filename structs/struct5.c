#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
char *nombre;
int edad;
}Peliculas;
int main(void)
{
int i;
char *nombres; 
int *edades;
char *temporal;
Peliculas **persona = NULL;
persona = (Peliculas**)realloc(persona, 2 * sizeof(Peliculas*));

for (int i = 0; i < 2; ++i)
{
	persona[i] = (Peliculas*)malloc(sizeof(Peliculas));
}

for(i=0;i<2;i++)
{
printf("Como te llamas\n");
temporal=malloc(1);
scanf("%s",temporal);
persona[i]->nombre=temporal;
// persona[i]->nombre="Ejemplo";
persona[i]->edad=7;
// persona[i]->nombre = nombres[i];
// persona[i]->edad = edades[i];
}


for(i=0;i<2;i++)
{
printf("Nombre: %s, Edad: %d\n",persona[i]->nombre,persona[i]->edad);
}
for(i=0;i<2;i++)
{
free(persona[i]);
}
free(persona);
return 0;
}
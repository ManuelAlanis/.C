#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
char *titulo;
char *director;
char **actores;
int  *año;
}Peliculas;

int main()
{
   char **c = 'F';
   char *s;
   int i;
   Peliculas **producto = NULL;
   producto = (Peliculas**)realloc(producto, 1 * sizeof(Peliculas*));
   producto[0] = (Peliculas*)malloc(sizeof(Peliculas));
   producto[0]->actores=malloc(50);
   *producto[0]->actores="Manuel";
   printf("%s\n",*producto[0]->actores);

   c = (char*)malloc(5*sizeof(char));
   // *producto[0]->actores=c;
   memset(producto[0]->actores, c, 5 );
   
   for( i=0; i<5; i++ )
     // printf( "c[%d]=%c ", i, c );
   printf( "\n" );
   free(*producto[0]->actores);
   return 0;
   return 0;
}
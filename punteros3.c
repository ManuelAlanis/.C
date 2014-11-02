#include <stdio.h>
const int MAX = 4;
int main ()
{
char *cNombres[] = { "Jorge Lopez",
                      "Marina Contreras",
                      "Jose Perez",
					  "Manuel Garcia",
      };
    int i = 0;
    for ( i = 0; i < MAX; i++)
    {
       printf("Contenido de cNombres[%d] = %s\n", i, cNombres[i] );
    }
    return 0;
}

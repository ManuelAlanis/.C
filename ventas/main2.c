#include <stdio.h>
#include <stdlib.h>
int main(void)
{
      
      // int balance[5] = {1000, 2, 3, 17, 50};
      int *saborFresa=NULL;
      int *saborVainilla=NULL;
      int *dias = {saborFresa,saborVainilla};
      int opdia;
      int i,iTam=0;
      int bandera=1;
      int opcion;
      int opventas;
      printf("Hola Pedrito\n");
      dias = (int*)malloc(iTam*sizeof(int));
      for(i=0;i<iTam;i++)
      {
            dias[i] = i+1;
      }

      for(i=0;i<iTam;i++)
      {
            printf("%d ",dias[i]);
      }
      
      do
      {
      printf("Hay agregado %d dias \n",iTam );
      printf("[1] Agregar un dia\n");
      printf("[2] Agregar ventas a los dias\n");
      scanf("%d",&opcion);
      switch(opcion)
      {
                 
            case 1: //*re *//
            iTam++;
            dias = (int*)realloc(dias,iTam*sizeof(int));
            break;

            case 2: 
            bandera=0; break;
      }

      } while (bandera!=0);
      

      printf("Dia?\n");
      scanf("%d",opdia);
      bandera=1;
      do
      {
      printf("[1]Venta de saborFresa\n");
      printf("[2]Venta de saborVainilla\n");
      scanf("%d",&opventas);
      switch(opventas){
            case 1: saborFresa[opventas]++;
            printf("%d\n",saborFresa[opdia] );
            break;

            case 2: saborVainilla[opventas]++;
            printf("%d\n",saborVainilla[opdia] );
            break;

            case 3: bandera=0; break;
            }
      } while (bandera!=0);

      printf("\nNuevo tamaño para el arreglo? ");
      scanf("%d",&iTam);
      dias = (int*)realloc(dias,iTam*sizeof(int));
      for(i=0;i<iTam;i++)
      {
            dias[i] = i+1;
      }
      for(i=0;i<iTam;i++)
      {
            printf("%d ",dias[i]);
      }
    free(dias);
return 0; }
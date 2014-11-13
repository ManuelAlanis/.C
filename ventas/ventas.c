#include <stdio.h>
#include <stdlib.h>

int main()
{
     int *fresa;
     int *vanilla;
     int dia;
     int bandera=1;
     int op;
     int opsabo;
     int opdia;
     int i;
fresa=malloc(dia*sizeof(int));
vanilla=malloc(dia*sizeof(int));
printf("HISTORIAL VENTAS BOLIS\n");
printf("Hay %d dias agregados\n",dia );
    do
    {
    	printf("[1] Agregar un día\n");
    	printf("[2] Capturar ventas\n");
    	printf("[3] Estadisticas\n");
      printf("[4] Salir\n");
    	scanf("%d",&op);
    switch(op){
    	case 1: 
    	dia++;
    	fresa=(int*)realloc(fresa,dia*sizeof(int));
    	vanilla=(int*)realloc(vanilla,dia*sizeof(int));
    	printf("Hay %d dias agregados\n",dia);
    	fresa[dia]=0;
    	vanilla[dia]=0;
    	printf("%d\n",fresa[dia]);
    	printf("%d\n",vanilla[dia]);	
    	break;
        case 2:
         bandera=1;
         for (i = 0; i < dia; ++i)
         {
           printf("[%d] Agregar ventas el dia %d\n",i+1,i+1 );
         }
         // printf("Dia?\n");
         scanf("%d",&opdia);
         // do
         // {
          printf("Dia %d seleccionado\n",opdia);
          printf("Cuantos bolis de Fresa vendiste?\n");
          scanf("%d",&fresa[opdia]);
          printf("Cuantos bolis de Vanilla vendiste?\n");
          scanf("%d",&vanilla[opdia]);
          printf("[7] Regresar\n" );
          scanf("%d",&opsabo);         
          // switch(opsabo)  
          // {
          // case 5:
          // fresa[opdia]++;
          // printf("%d Bolis de fresa vendidos\n",fresa[1] );
          // break;
          // case 7: bandera=10; break;
          // }
          // } while (bandera!=0);
          break;        

    	case 4: bandera=0; break;
    }
    } while (bandera!=0);	
	
	return 0;
}
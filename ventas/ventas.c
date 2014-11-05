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
fresa=malloc(dia*sizeof(int));
vanilla=malloc(dia*sizeof(int));
printf("Los dias son %d ...\n",dia );
    do
    {
    	printf("[1] add dia\n");
    	printf("[2] recive sells\n");
    	printf("[3] exit\n");
    	scanf("%d",&op);

    switch(op){

    	case 1: 
    	dia++;
    	fresa=(int*)realloc(fresa,dia*sizeof(int));
    	vanilla=(int*)realloc(vanilla,dia*sizeof(int));
    	printf("Los dias son %d ...\n",dia );
    	fresa[dia]=0;
    	vanilla[dia]=0;
    	printf("%d\n",fresa[dia]);
    	printf("%d\n",vanilla[dia]);	
    	break;

        case 2:
         bandera=1;
         printf("Dia?\n");
         scanf("%d",&opdia);
         
         
         do
         {

          printf("Sabor?\n");
          printf("[5] fresa\n");
          printf("[6] vanilla\n");		
          printf("[7] salirsssss\n" );
          scanf("%d",&opsabo);         
          switch(opsabo);  
          {
          case 5:
          fresa[opdia]++;
          printf("%d\n",fresa[1] );
          break;

          case 7: bandera=0; break;

          }
          


         	
         } while (bandera!=0);
       


        break;        

    	case 3: bandera=0; break;
    }
    } while (bandera!=0);	
	
	return 0;
}
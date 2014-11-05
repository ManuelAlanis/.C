#include <stdio.h>
#include <stdlib.h>

void promedio(int *total, int p);
void ventaminima(int *total, int p);
void ventamax(int *total, int p);

int main()
{

    int *total = NULL, k = 1, s;
    total=calloc(1,sizeof(int));
    int v, d, t, op, r, u, f, p = 0 , totaldia = 0;
    do
    {
        float prom;

        total = (int*)realloc(total,k*sizeof(int));
        printf("PALETERIA PEDRITO\nDIA%d\n\n",k);
        printf("Cuantos bolis de Vainilla vendiste?\t");
        scanf("%d",&v);
        printf("Cuantos bolis de Tamarindo vendiste?\t");
        scanf("%d",&t);
        printf("Cuantos bolis de Rompope vendiste?\t");
        scanf("%d",&r);
        printf("Cuantos bolis de Uva vendiste?\t");
        scanf("%d",&u);
        printf("Cuantos bolis de Fresa vendiste?\t");
        scanf("%d",&f);
        totaldia=v+t+r+u+f;
        prom=(float)totaldia/5;
        printf("\nVENTA TOTAL DEL DIA\t%d\nPROMEDIO DE VENTA DEL DIA\t %f\n",totaldia,prom);
        total[p]=totaldia;
        printf("\nDESEA CAPTURAR OTRO DIA DE VENTA PRESIONA 1 PARA CAPTURAR, PRESIONA CUALQUER TECLA PARA CONTINUAR\n ");
        scanf("%d",&s);
        k++;
        p++;
    }while(s==1);
    promedio(total,p);
    ventamax(total,p);
    ventaminima(total,p);

    return 0;
}

void promedio(int *total,int p)
{


    int z,suma=0;
    float promedio;
    for(z=0; z<p; z++)
    {
        suma+=total[z];
    }
    printf("\nEL PROMEDIO DE VENTA DIARIA ES\t");
    promedio=(float)suma/z;
    printf("%f",promedio);
}

void ventamax(int *total, int p)
{
        int aux=0,z;
    for(z=0; z<p; z++)
    {
        if(total[z]>aux)
            aux=total[z];
    }
    printf("\n\nLA VENTA MAXIMA EN ESTOS DIAS FUE\t%d\n",aux);
}


void ventaminima(int *total, int p)
{
    int aux=999999,z;
    for(z=0; z<p; z++)
    {
        if(total[z]<aux)
            aux=total[z];
    }
    printf("\nLA VENTA MINIMA EN ESTOS DIAS FUE\t%d\n",aux);
}
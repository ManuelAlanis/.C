#include <stdio.h>
#include <stdlib.h>

double promedio(int npromedios);

int main ()
{
   
   int npromedios;
   double prom;
   

   printf("calcula promedio\n");
   printf("Cuantos numeros vas a promediar\n");
   scanf("%d",&npromedios);
   prom = promedio(npromedios);
   printf("El valor promedio es: %f\n", prom );
   // imprime(npromedios);
   return 0;
}
double promedio(int npromedios)
{
  int arreglo[npromedios-1];
  *arreglo=(int)malloc(npromedios*sizeof(int));  
  if (arreglo)
  {     
    printf("Asignación de memoria realizada\n");
  }
  else  
  {
    printf("La Asignación fallo\n");
    exit(1);
  }
  for (int i = 0; i < npromedios; ++i)
  {
    scanf("%d",&arreglo[i]);
  }
  int i, sum = 0;       
  double prom;          
  for (i = 0; i < npromedios; ++i)
  {
     sum += arreglo[i];
  }
  prom = (double)sum / npromedios;
  return prom;
}
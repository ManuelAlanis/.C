#include <stdio.h> 

double promedio(int *iArr, int iTam); 

int main () {
  
  int balance[5] = {1000, 2, 3, 17, 50};
  double prom; prom = promedio( balance, 5 ) ; 
  printf("El valor promedio es: %f\n", prom ); 
  
  return 0; 
} 
  double promedio(int *iArr, int iTam) 
  { 
  	
  int i, sum = 0; double prom; 

  for (i = 0; i < iTam; ++i) 
  	{ 
  	sum += iArr[i];
  	} 
  prom = (double)sum / iTam; 
  return prom;
}
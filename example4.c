#include <stdio.h>
void func(int *iVar)
{
*iVar = 5;
}
int main(void)
{
int iVar = 1;
printf("El valor de iVar es %d\n",iVar);
func(&iVar); /* Se envía la dirección de la variable iVar */
printf("El valor de iVar es %d\n",iVar);
return 0;
}
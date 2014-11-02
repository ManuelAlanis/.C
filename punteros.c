#include <stdio.h>

int main()
{

	int iVar=20;
	int *iPtr=NULL;

	iPtr= &iVar;
	printf("iPtr = %d\n",*iPtr );

	printf("iPtr = %d\n",iPtr );
	printf("iPtr = %d\n",&iPtr );


	printf("iPtr = %d\n",iVar );
	printf("iPtr = %d\n",&iVar );

	return 0;
}
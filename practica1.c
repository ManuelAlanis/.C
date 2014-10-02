#include <stdio.h>
void capturaDatos(){
   
   char captura[1];
   char *nombre= captura;
   printf("Cual es tu nombre?\n");
   scanf("%s",nombre);
   printf("tu nombre es %s\n",nombre);

   char captura2[1];
   char *apellidopaterno= captura2;
   printf("Cual es tu apellido paterno?\n");
   scanf("%s",apellidopaterno);
   printf("Tu apellido paterno es %s\n",apellidopaterno);

   char captura3[1];
   char *apellidomaterno= captura3;
   printf("Cual es tu apellido materno?\n");
   scanf("%s",apellidomaterno);
   printf("Tu apellido materno es %s\n",apellidomaterno);

   printf("Tu nombre completo es: %s",nombre);

}
int main()
{
		
	char *nombre;


	capturaDatos();
	return 0;
}
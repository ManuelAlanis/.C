#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 

void capturaDatos(char *nombre,char *apellidoPaterno,char	*apellidoMaterno,char *diaNa,char *mesNa,char *añoNa,char *genero,char *entidad)
{
   printf("Escribe tu primer nombre: \n");
   gets(nombre);
   printf("Escribe tu apellido paterno: \n");
   gets(apellidoPaterno);
   printf("Escribe tu apellido materno: \n");
   gets(apellidoMaterno);
   printf("Año de nacimiento: 'ejemplo 1994'\n");
   gets(añoNa);
   printf("Numero en mes de nacimiento: 'ejemplo 08'\n");
   gets(mesNa);
   printf("Dia de nacimiento: 'ejemplo 07' \n");
   gets(diaNa);
   printf("Genero H/M:\n");
   gets(genero);
   printf("Abreviación de tu entidad federativa: Ejemplo 'BC'\n");
   gets(entidad);
}
void generacurp(char *nombre,char *apellidoPaterno,char	*apellidoMaterno,char *diaNa,char *mesNa,char *añoNa,char *genero,char *entidad)
{
	char vocales[5]="aeiou";
   int bandera;
   int b=1;
   int c;
   printf("Tu curp es: ");
   printf("%c",toupper(apellidoPaterno[0]));
   bandera=0;
   do{//buscando siguiente vocal
          for (int i = 0; i < 5; ++i)         
          if(apellidoPaterno[b]==vocales[i])
            {
            printf("%c", toupper(vocales[i]));
            bandera=1;
            }
      b++;
   }while(bandera==0);

   printf("%c",toupper(apellidoMaterno[0]));
   printf("%c",toupper(nombre[0] ));
   printf("%c%c",añoNa[2],añoNa[3] );//imprime año en dos digitos
   printf("%c%c",mesNa[0],mesNa[1] );
   printf("%c%c",diaNa[0],diaNa[1] );
   printf("%c",toupper(genero[0] ));
   printf("%c%c",toupper(entidad[0]),toupper(entidad[1] ));


char consonantes[23]="qwrtpsdfghjklzxcvbnmñ";
c=0;
bandera=0;
do{//buscando segunda consonante apellido paterno
          for (int i = 0; i < 23; ++i)
         
          if(apellidoPaterno[c]==consonantes[i])
         {
            
            bandera++;
            if (bandera==2)
            {
               printf("%c", toupper(consonantes[i]));
            }
         }
         c++;
   }while(bandera!=2);
c=0;
bandera=0;
do{//buscando segunda consonante apellido materno
          for (int i = 0; i < 23; ++i)
         
          if(apellidoMaterno[c]==consonantes[i])
         {
            
            bandera++;
            if (bandera==2)
            {
               printf("%c", toupper(consonantes[i]));
            }
         }
         c++;
   }while(bandera!=2);
c=0;
bandera=0;
do{//buscando segunda consonante nombre
          for (int i = 0; i < 23; ++i)
         
          if(nombre[c]==consonantes[i])
         {
            
            bandera++;
            if (bandera==2)
            {
               printf("%c", toupper(consonantes[i]));
            }
         }
         c++;
   }while(bandera!=2);

printf("01\n");
}

void generaRFC(char *nombre,char *apellidoPaterno,char   *apellidoMaterno,char *diaNa,char *mesNa,char *añoNa)
{
   char vocales[5]="aeiou";
   int bandera;
   int b=1;
   int c;
   printf("\nTu RFC es: ");
   printf("%c",toupper(apellidoPaterno[0]));
   bandera=0;
   do{//buscando siguiente vocal
          for (int i = 0; i < 5; ++i)         
          if(apellidoPaterno[b]==vocales[i])
            {
            printf("%c", toupper(vocales[i]));
            bandera=1;
            }
      b++;
   }while(bandera==0);

   printf("%c",toupper(apellidoMaterno[0]));
   printf("%c",toupper(nombre[0] ));
   printf("%c%c",añoNa[2],añoNa[3] );//imprime año en dos digitos
   printf("%c%c",mesNa[0],mesNa[1] );
   printf("%c%c",diaNa[0],diaNa[1] );
   printf("011\n");
}

int main()
{
	char *nombre[50];
	char *apellidoPaterno[50];
	char *apellidoMaterno[50];
	char *diaNa[2];
	char *mesNa[2];
	char *añoNa[4];
	char *genero[1];
	char *entidad[2];

  printf("Programa para generar CURP y RFC\n");
	capturaDatos(nombre,apellidoPaterno,apellidoMaterno,diaNa,mesNa,añoNa,genero,entidad);
	generacurp(nombre,apellidoPaterno,apellidoMaterno,diaNa,mesNa,añoNa,genero,entidad);
  generaRFC(nombre,apellidoPaterno,apellidoMaterno,diaNa,mesNa,añoNa);
	return 0;
}
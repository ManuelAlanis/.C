#include <stdio.h>
void imprimeDatos(char **etiquetas,char *nombre,char *pelicula,char *cancion,char *hobby,char *signo)
{
char **iPtr;   
   iPtr=&*etiquetas;

     printf("Hola nos dijiste que  tu %s es %s es un gusto que compartas tu información!\n",*iPtr,nombre);
     iPtr++;

     printf("Asi que tu %s es %s, es una buena pelicula\n",*iPtr,pelicula);
     iPtr++;

     printf("Tu %s es %s, esa cancion es movida\n",*iPtr,cancion);
     iPtr++;
     
     printf("En tu tiempo libre tienes como %s %s, es divertido\n",*iPtr,hobby);
     iPtr++;

     printf("%s es un %s muy extraño\n",signo,*iPtr);
}
void capturaDatos(char **etiquetas,char *nombre,char *pelicula,char *cancion,char *hobby,char *signo)
{
    
   char **iPtr;
   iPtr=&*etiquetas;

     printf("Escribe tu %s :\n",*iPtr);
     gets(nombre);
     iPtr++;

     printf("Escribe tu %s :\n",*iPtr);
     gets(pelicula);
     iPtr++;

     printf("Escribe tu %s :\n",*iPtr);
     gets(cancion);
     iPtr++;
   	 
   	 printf("Escribe tu %s :\n",*iPtr);
     gets(hobby);
     iPtr++;

     printf("Escribe tu %s :\n",*iPtr);
     gets(signo);
}
int main()
{ 
   char  *etiquetas[]={"nombre completo","pelicula favorita","cancion favorita","hobby","signo zodiacal"};
   
   char  nombre[50];
   char  pelicula[30];
   char  cancion[30];
   char  hobby[30];
   char  signo[30];

   printf("Hola! esto un test para conocer tus gustos personales! \n");
   capturaDatos(etiquetas,nombre,pelicula,cancion,hobby,signo);
   // printf("XXXX\n" );
   imprimeDatos(etiquetas,nombre,pelicula,cancion,hobby,signo);
}
#include <stdio.h> 


struct Libros 
{ char *titulo; 
  char *autor;   
  char *editorial;
  long int isbn; 
}; 

void llenar(struct Libros *libro);
void imprimirInfoLibro(struct Libros libro);   

int main(void) 
{ 
      struct Libros **libro1=NULL; 
      
      llenar(libro1); 
      imprimirInfoLibro(libro1); 
      
      return 0;
}

void llenar(struct Libros *libro){
      char *titulo;
      printf("Titulo, morro?\n");
      scanf("%s",titulo);
      libro->titulo =titulo;
      libro->autor = "Pedro Infante";
      libro->editorial = "Pepe el toro editoriales";
      printf("Cual es el isb, bato?\n");
      scanf("%ld",&libro->isbn);
      // libro->isbn = variable;  
}

void imprimirInfoLibro(struct Libros libro){
      printf("Titulo: %s\n",libro.titulo );
      printf("Autor: %s\n",libro.autor );
      printf("Editorial: %s\n",libro.editorial );
      printf("ISBN: %ld\n",libro.isbn);
}

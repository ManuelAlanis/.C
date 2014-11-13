#include <stdio.h> 


struct Libros 
{ char *titulo; 
  char *autor;   
  char *editorial;
  long int isbn; 
}; 
      
void llenar(struct Libros *libro){
      libro->titulo = "Programacion";
      libro->autor = "Pedro Infante";
      libro->editorial = "Pepe el toro editoriales";
      libro->isbn = 9783161484100;  
}

void imprimirInfoLibro(struct Libros libro){
      printf("Titulo: %s\n",libro.titulo );
      printf("Autor: %s\n",libro.autor );
      printf("Editorial: %s\n",libro.editorial );
      printf("ISBN: %ld\n",libro.isbn);
}

int main(void) 
{ 
      struct Libros libro1; 
      llenar(&libro1); 
      imprimirInfoLibro(libro1); 
      
      return 0;
}
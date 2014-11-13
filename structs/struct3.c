#include <stdio.h>

struct Libros
{
	char *titulo;
};

int main()
{
	struct Libros *libro[2];
	libro[0]=(struct Libros*) malloc(sizeof(struct Libros));
	libro[0]->titulo="MATE";
	printf("titulo: \t %s\n",libro[0]->titulo );
	free(libro[0]);
	return 0;
}
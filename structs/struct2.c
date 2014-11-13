#include <stdio.h>

struct Libros
{
	char *titulo;
	char *autor;
	char *editorial;
	long long int isbn;
};

int main()
{
	struct Libros libro1;
	libro1.titulo="Programacion";
	libro1.autor="Manuel Alanis";
	libro1.editorial="Manuel editorial";
	libro1.isbn=3456354634563;

	printf("titulo:\t   %s\n",libro1.titulo );
	printf("autor:\t   %s\n",libro1.autor );
	printf("editorial:\t%s\n",libro1.editorial );
	printf("isbn:\t   %lld\n",libro1.isbn );
	
	return 0;
}
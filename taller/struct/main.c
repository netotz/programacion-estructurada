#include "h_struct_.h"

int main(int argi, char **argc){
	srand(time(0));

	int max;
	limit = 0;

	printf("\n\tCantidad de alumnos a registrar: ");
	scanf("%d",&max);
	PERSON misAlumnos[max];
	PERSON alumno_copia[max];

	do{
		menu_principal(max, misAlumnos);
	}
	while(opcion != '\0');

	return 0;
}

#include "h_struct_.h"

int buscar(PERSON alumno[]){
	int matriculab;
	char nombreb[20];
	puts("\n\n\tBuscar registro por:");
	printf("\t1. Matr%ccula\n",161);
	puts("\t2. Nombre");
	printf("\tPulse cualquier tecla para volver al men%c principal\n",163);
	printf("\tOpci%cn: ",162);
	opcion = getch();
	int pos;
		switch(opcion){
			case '1':{
				printf("\n\n\tMatr%ccula a buscar: ",161);
				scanf("%d",&matriculab);
				for(i = 0; i < limit; i++){
					if(matriculab == alumno[i].matricula) return i;
				}
				break;
			}
			case '2':{
				printf("\n\n\tNombre a buscar: ");
				scanf(" %[^\n]",&nombreb);
				for(i = 0; i < limit; i++){
					if(strcmp(nombreb,alumno[i].nombre) == 0) return i;
				}
				break;
			}
			default:{
				return -1;
				break;
			}
		}
		puts("\n\tNo se encontraron coincidencias\n");
		system("pause");
		return -1;
}

#include "h_struct_.h"

void editar(int pos, PERSON alumno[]){
	system("cls");
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",alumno[pos].matricula,alumno[pos].nombre,alumno[pos].edad,164,alumno[pos].peso,alumno[pos].altura);
	for(i = 0; i < 20; i++) printf("%c",196);
	puts("\n\tSeleccione dato a editar: ");
	printf("\t1. Matr%ccula\n",161);
	puts("\t2. Nombre");
	puts("\t3. Edad");
	puts("\t4. Peso");
	puts("\t5. Altura");
	printf("\tPulse cualquier tecla para volver al men%c principal\n",163);
	printf("\tOpci%cn: ",162);
	opcion = getch();
	puts("\n");
	switch(opcion){
		case '1':{
			printf("\tNueva matr%ccula: ",161);
			scanf("%d",&alumno[pos].matricula);
			break;
		}
		case '2':{
			printf("\tNuevo nombre: ");
			scanf(" %[^\n]",&alumno[pos].nombre);
			break;
		}
		case '3':{
			printf("\tNueva edad: ");
			scanf("%d",&alumno[pos].edad);
			break;
		}
		case '4':{
			printf("\tNuevo peso: ");
			scanf("%f",&alumno[pos].peso);
			break;
		}
		case '5':{
			printf("\tNueva altura: ");
			scanf("%f",&alumno[pos].altura);
			break;
		}
		default:{
			return;
			break;
		}
	}
	
	return;
}

void borrar(int pos, PERSON alumno[]){
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",alumno[pos].matricula,alumno[pos].nombre,alumno[pos].edad,164,alumno[pos].peso,alumno[pos].altura);
	for(i = 0; i < 20; i++) printf("%c",196);
	for(i = pos; i < limit; i++){
		alumno[i] = alumno[i+1];
	}
	limit--;
	puts("\n\tRegistro eliminado\n");
	
	return;
}

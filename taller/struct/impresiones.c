#include "h_struct_.h"

void imprimir(PERSON alumno[]){	
	system("cls");
	printf("Matr%ccula %c Nombre               %c ",161,179,179);
	printf("Edad %c Peso (kg) %c Estatura (m)\n",179,179);
		
	for(i = 0; i < 66; i++) printf("%c",196);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c",197,197,197,197);
	puts("");
	for(i = 0; i < limit; i++){
		printf("%9d %c ",alumno[i].matricula,179);
		printf("%-20s %c ",alumno[i].nombre,179);
		printf("%4d %c ",alumno[i].edad,179);
		printf("%9.1f %c ",alumno[i].peso,179);
		printf("%12.2f\n",alumno[i].altura);
	}
	for(i = 0; i < 66; i++) printf("%c",196);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c",197,197,197,193);
	printf("\n            PROMEDIOS            %c ",179);
	printf("%4.0f %c ",promedio(1,alumno),179);
	printf("%9.1f %c ",promedio(2,alumno),179);
	printf("%12.2f\n",promedio(3,alumno),179);
	for(i = 0; i < 66; i++) printf("%c",196);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b%c",193,193,193);
	puts("\n\n\tPulse 'C' para crear archivo de texto con la lista");
	puts("\t   Ordenar lista por:");
	printf("\t1. Matr%ccula\n",161);
	puts("\t2. Nombre");
	puts("\t3. Edad");
	puts("\t4. Peso");
	puts("\t5. Altura");
	printf("\tPulse cualquier tecla para volver al men%c principal",163);
	printf("\n\tOpci%cn: ",162);
	opcion = getch();
	switch(opcion){
		case 'c': case 'C':{
			crear_txt(alumno);
			break;
		}
		case '1':{
			ordenar_matricula(alumno);
			break;
		}
		case '2':{
			ordenar_nombre(alumno);
			break;
		}
		case '3':{
			ordenar_edad(alumno);
			break;
		}
		case '4':{
			ordenar_peso(alumno);
			break;
		}
		case '5':{
			ordenar_altura(alumno);
			break;
		}
		default:{
			return;
			break;
		}
	}
}

float promedio(int tipo, PERSON alumno[]){
	float sum = 0;
	switch(tipo){
		case 1:{
			for(i = 0; i < limit; i++) sum += alumno[i].edad;
			break;
		}
		case 2:{
			for(i = 0; i < limit; i++) sum += alumno[i].peso;
			break;
		}
		case 3:{
			for(i = 0; i < limit; i++) sum += alumno[i].altura;
			break;
		}
	}
	
	return sum/limit;
}

void fimprimir(FILE *archivo, PERSON alumno[]){
	fprintf(archivo,"Matrícula   Nombre                 ");
	fprintf(archivo,"Edad   Peso (kg)   Estatura (m)\n");
	fprintf(archivo,"\n");
	for(i = 0; i < limit; i++){
		fprintf(archivo,"%9d   ",alumno[i].matricula);
		fprintf(archivo,"%-20s   ",alumno[i].nombre);
		fprintf(archivo,"%4d   ",alumno[i].edad);
		fprintf(archivo,"%9.1f   ",alumno[i].peso);
		fprintf(archivo,"%12.2f\n",alumno[i].altura);
	}
	fprintf(archivo,"\n            PROMEDIOS              ");
	fprintf(archivo,"%4.0f   ",promedio(1,alumno));
	fprintf(archivo,"%9.1f   ",promedio(2,alumno));
	fprintf(archivo,"%12.2f",promedio(3,alumno));
	
	return;
}

/*
Programa:	Arreglos
Autor:		Ernesto Andrés Ortiz López
Propósito:	Arreglo unidimensional
			8 mar 2018
*/

#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argi, char **argc){
	srand(time(0));
	int cantidad, max, i, j;
	printf("Cantidad de alumnos: ");
	scanf("%d",&cantidad);
	int matricula[cantidad];
	char nombre[cantidad][40];
	float calif[cantidad];
	for(i=0; i < cantidad; i++){
		printf("\nNombre del alumno: ");
		scanf(" %[^\n]",&nombre[i]);
//		printf("Matricula: ");
//		scanf("%d",&matricula[i]);
		matricula[i] = rand() % 1899999 + 1700000;
//		printf("Calificacion: ");
//		scanf("%f",&calif[i]);
		calif[i] = rand() % 100;
	}
	printf("\n\n\tMatricula\tNombre");
	for(i=1; i < cantidad; i++){
		if(strlen(nombre[i]) > strlen(nombre[i-1])) max = strlen(nombre[i]);
	}
	for(i=0; i < max-6; i++) printf(" "); printf("\t");
	printf("Calificacion\n");
	
	for(i=0; i < 75; i++) printf("%c",196); printf("\n");
	
	for(i=0; i<cantidad; i++){
		printf("\t%9d\t%-s",matricula[i],nombre[i]);
		for(j=0; j < max-strlen(matricula[i]);j++) printf(" ");
		printf("\t%.1f\n",calif[i]);
	}
	
	return 0;
}

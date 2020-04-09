#include "h_struct_.h"

void crear_txt(PERSON Alumnos[]){
	char name[20];
	FILE *_txt;
	printf("\n\nNombre de nuevo archivo de texto (si ya existe un archivo del mismo nombre se sobreescribir%c): ",160);
	scanf(" %[^\n]",&name);
	strcat(name,".txt");

	_txt = fopen(name, "w");
	if(_txt == 0){
		perror("Error");
		fclose(_txt);
	}
	else fimprimir(_txt, Alumnos);
	fclose(_txt);
	printf("\n\nNuevo archivo %c%s%c creado en la misma carpeta de este ejecutable\n\n",34,name,34);
	system(name);

	return;
}

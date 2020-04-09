#include "_listav_.h"

void respaldar(void){
	char name[10];
	puts("Guardar respaldo de lista\n");
	printf("\tNombre de nueva carpeta: ");
	scanf(" %[^\n]",&name);
	int folder = mkdir(name);
	if(folder < 0){
		perror("\tError");
		puts("");
		system("pause");
		return;
	}
	else{
		crear_txt(name,"matriculas.txt");
		crear_txt(name,"nombres.txt");
		crear_txt(name,"edades.txt");
		crear_txt(name,"pesos.txt");
		crear_txt(name,"alturas.txt");
		crear_txt(name,"cantidad.txt");
		crear_txt(name,"lista.txt");
		printf("\n\nCarpeta %c%s%c con archivos creada en el mismo directorio de este ejecutable\n\n",34,name,34);
	}
	system("pause");

	return;
}

void crear_txt(const char *_nombredir, const char *_nombretxt){
	char _nombre[50];
	_nombre[0] = '\0';
	strcat(_nombre,_nombredir);
	strcat(_nombre,"\\\\");
	strcat(_nombre,_nombretxt);
	
	FILE *pFile;
	pFile = fopen(_nombre, "w");
	if(pFile == NULL){
		perror("Error");
		fclose(pFile);
		return;
	}
	else fimprimir(pFile, _nombretxt);
	fclose(pFile);
	
	return;
}

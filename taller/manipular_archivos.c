#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

#define ESC 27

int main(int argi, char **argc){
	setlocale(LC_ALL,"");
	
	char frase[240], ext[5], modo[2], tecla = '0';
	unsigned char *buffer, ch;
	long long len, size;
	int i, n;
	
	FILE *archivo;
	
//	printf("Nombre del archivo: ");
//	scanf(" %[^\n]",name);
//	printf("Extensión del archivo (ej: .txt): ");
//	scanf("%s",ext);
//	strcat(name,ext);
//	printf("Modo de abrir el archivo: ");
//	scanf("%s",modo);
	
//	archivo = fopen(name,modo);
	archivo = fopen("frases.bin","wb");
	if(archivo == NULL) perror("Error");
	else{
		puts("¿Cuáles son tus frases favoritas?");
		while(tecla != ESC){
			scanf(" %[^\n]",frase);
			strcat(frase,"\n");
			fwrite(frase,sizeof(char),strlen(frase),archivo);
			tecla = getch();
		}
	}
	fclose(archivo);

	archivo = fopen("frases.bin","rb");
	if(archivo == NULL) perror("Error");
	else{
		n = 0;
		while((ch = fgetc(archivo)) != '\n') n++;
		fseek(archivo,n,SEEK_SET);
		size = ftell(archivo);
		buffer = calloc(size+1,sizeof(char));
		
		rewind(archivo);
		puts("");
		fread(buffer,sizeof(char),size+1,archivo);
		for(i = 0; i < size; i++) printf("%c",buffer[i]);
		
		rewind(archivo);
		puts("");
		fread(buffer,sizeof(buffer),1,archivo);
		printf("%s",buffer);
	}
	
	fclose(archivo);
	
	free(buffer);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argi, char **argc){
	int n,first,last;
	char ch, originaln[20], copyn[20];
	
	FILE *originalf, *copyf;
	
	do{
		
	printf("Nombre de archivo original: ");
	scanf(" %[^\n]",originaln);
	printf("Nombre de archivo copia: ");
	scanf(" %[^\n]",copyn);
	
	copyf = fopen(copyn,"w");
	if(originalf == 0){
		perror("Error");
	}
	else{
		printf("Programa: ");
		scanf("%d",&n);
		fprintf(copyf,"/*\nPrograma %d\nNombre Apellido\tITS\tMatricula\nProgramacion estructurada\nSalon\t\tGrupo\n*/\n\n",n);
	}

	originalf = fopen(originaln,"r");
	if(originalf == 0){
		perror("Error");
		fclose(copyf);
	}	
	else while((ch = fgetc(originalf)) != EOF) fputc(ch, copyf);
	
	fclose(originalf);
	fclose(copyf);
	
	}while(n != 0);
	
	return 0;
}

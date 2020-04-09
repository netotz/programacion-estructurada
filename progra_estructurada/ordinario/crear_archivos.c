#include <stdio.h>

int main(int argi, char **argc){
	char nombre[12];
	int i, n, max;
	FILE *archivo;
	printf("Crear archivos en el rango ( a-b ): ");
	scanf("%d-%d",&n,&max);
	
	for(i = n; n <= max; n++){
		sprintf(nombre,"programa%02d.c",n);
		printf("%s",nombre);
		
		archivo = fopen(nombre,"w");
		if(archivo == NULL) perror("Error");
		else{
			fprintf(archivo,"/*\nPrograma %d\nNombre Apellido\tITS\tMatricula\nProgramacion estructurada\nSalon\t\tGrupo\n*/\n\n",n);
			fprintf(archivo,"#include <stdio.h>\n\nint main(int argi, char **argc){\n\n\treturn 0;\n}");
		}
		fclose(archivo);
	}
	
	return 0;
}

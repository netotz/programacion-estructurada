#include "_listav_.h"

pNodo buffer, first;
int i;

void imprimir(void){
	system("cls");
	printf("Matr%ccula %c Nombre               %c ",161,179,179);
	printf("Edad %c Peso (kg) %c Estatura (m)\n",179,179);
		
	for(i = 0; i < 66; i++) printf("%c",196);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	printf("%c\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c",197,197,197,197);
	puts("");
	
	buffer = first;
	while(buffer != NULL){
		printf("%9d %c ",buffer->matricula,179);
		printf("%-20s %c ",buffer->nombre,179);
		printf("%4d %c ",buffer->edad,179);
		printf("%9.1f %c ",buffer->peso,179);
		printf("%12.2f\n",buffer->altura);
		buffer = buffer->next;
	}
	
	for(i = 0; i < 66; i++) printf("%c",196);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	printf("%c\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c",197,197,197,193);
	printf("\n            PROMEDIOS            %c ",179);
	printf("%4.0f %c ",promedio("edad"),179);
	printf("%9.1f %c ",promedio("peso"),179);
	printf("%12.2f\n",promedio("altura"));
	for(i = 0; i < 66; i++) printf("%c",196);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b\b\b\b\b\b%c\b\b\b\b\b\b\b\b%c",193,193,193);
	
	puts("\n\tPulse 'G' para guardar respaldo de lista");
	puts("\t   Ordenar lista por:");
	printf("\t1. Matr%ccula\n",161);
	puts("\t2. Nombre");
	puts("\t3. Edad");
	puts("\t4. Peso");
	puts("\t5. Altura");
	printf("\tPulse cualquier tecla para volver al men%c principal\n",163);
	printf("\n\tOpci%cn: ",162);
	char opcion = getch();
	switch(opcion){
		case 'g': case 'G':{
			respaldar();
			break;
		}
		case '1':{
			ordenar_matricula();
			break;
		}
		case '2':{
			ordenar_nombre();
			break;
		}
		case '3':{
			ordenar_edad();
			break;
		}
		case '4':{
			ordenar_peso();
			break;
		}
		case '5':{
			ordenar_altura();
			break;
		}
		default: return;
	}
	
	return;
}

float promedio(const char *_miembro){
	float sum = 0;
	buffer = first;
	if(_miembro == "edad"){
		while(buffer != NULL){
			sum += (float)(buffer->edad);
			buffer = buffer->next;
		}
	}
	else if(_miembro == "peso"){
		while(buffer != NULL){
			sum += buffer->peso;
			buffer = buffer->next;
		}
	}
	else{
		while(buffer != NULL){
			sum += buffer->altura;
			buffer = buffer->next;
		}
	}
	
	return sum/(contar());
}

void fimprimir(FILE *archivo, const char *_tipo){
	if(strcmp(_tipo,"matriculas.txt") == 0){
		buffer = first;
		while(buffer != NULL){
			fprintf(archivo,"%d\n",buffer->matricula);
			buffer = buffer->next;
		}
	}
	else if(strcmp(_tipo,"nombres.txt") == 0){
		buffer = first;
		while(buffer != NULL){
			fprintf(archivo,"%s\n",buffer->nombre);
			buffer = buffer->next;
		}
	}
	else if(strcmp(_tipo,"edades.txt") == 0){
		buffer = first;
		while(buffer != NULL){
			fprintf(archivo,"%d\n",buffer->edad);
			buffer = buffer->next;
		}
	}
	else if(strcmp(_tipo,"pesos.txt") == 0){
		buffer = first;
		while(buffer != NULL){
			fprintf(archivo,"%f\n",buffer->peso);
			buffer = buffer->next;
		}
	}
	else if(strcmp(_tipo,"alturas.txt") == 0){
		buffer = first;
		while(buffer != NULL){
			fprintf(archivo,"%f\n",buffer->altura);
			buffer = buffer->next;
		}
	}
	else if(strcmp(_tipo,"lista.txt") == 0){
		fprintf(archivo,"Matrícula   Nombre                 ");
		fprintf(archivo,"Edad   Peso (kg)   Estatura (m)\n");
		fprintf(archivo,"\n");
		buffer = first;
		while(buffer != NULL){
			fprintf(archivo,"%9d   ",buffer->matricula);
			fprintf(archivo,"%-20s   ",buffer->nombre);
			fprintf(archivo,"%4d   ",buffer->edad);
			fprintf(archivo,"%9.1f   ",buffer->peso);
			fprintf(archivo,"%12.2f\n",buffer->altura);
			buffer = buffer->next;
		}
		fprintf(archivo,"\n            PROMEDIOS              ");
		fprintf(archivo,"%4.0f   ",promedio("edad"));
		fprintf(archivo,"%9.1f   ",promedio("peso"));
		fprintf(archivo,"%12.2f",promedio("altura"));
	}
	else fprintf(archivo,"%d",contar());
	
	return;
}

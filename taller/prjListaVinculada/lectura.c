#include "_listav_.h"

pNodo nuevo, first;

void leer(const char *_namedir, const char *Xtxt){
	char _nombre[50];
	_nombre[0] = '\0';
	strcat(_nombre,_namedir);
	strcat(_nombre,"\\\\");
	strcat(_nombre,Xtxt);
	
	FILE *read;
	read = fopen(_nombre,"r");
	if(read == NULL){
		perror("Error");
		fclose(read);
		return;
	}
	rewind(read);
	pNodo buffer = first;
	if(strcmp(Xtxt,"cantidad.txt") == 0){
		int cantidad;
		fscanf(read,"%d",&cantidad);
		for(i = 0; i < cantidad; i++){
			nuevo = (pNodo)malloc(sizeof(struct Lista));
			asignar(nuevo);
		}
	}
	else if(strcmp(Xtxt,"matriculas.txt") == 0){
		int bufm;
		while(fscanf(read,"%d",&bufm) != EOF){
			buffer->matricula = bufm;
			buffer = buffer->next;
		}
	}
	else if(strcmp(Xtxt,"nombres.txt") == 0){
		char bufn[20];
		while(fscanf(read," %[^\n]",&bufn) != EOF){
			strcpy(buffer->nombre,bufn);
			buffer = buffer->next;
		}
	}
	else if(strcmp(Xtxt,"edades.txt") == 0){
		int bufe;
		while(fscanf(read,"%d",&bufe) != EOF){
			buffer->edad = bufe;
			buffer = buffer->next;
		}
	}
	else if(strcmp(Xtxt,"pesos.txt") == 0){
		float bufp;
		while(fscanf(read,"%f",&bufp) != EOF){
			buffer->peso = bufp;
			buffer = buffer->next;
		}
	}
	else if(strcmp(Xtxt,"alturas.txt") == 0){
		float bufa;
		while(fscanf(read,"%f",&bufa) != EOF){
			buffer->altura = bufa;
			buffer = buffer->next;
		}
	}
	
	fclose(read);	
	
	return;
}

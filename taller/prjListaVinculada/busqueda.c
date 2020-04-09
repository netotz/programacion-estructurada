#include "_listav_.h"

pNodo first;

int buscar(void){
	int matriculab;
	char nombreb[20];
	
	puts("\n\n\tBuscar registro por:");
	printf("\t1. Matr%ccula\n",161);
	puts("\t2. Nombre");
	printf("\tPulse cualquier tecla para volver al men%c principal\n",163);
	printf("\tOpci%cn: ",162);
	int pos = 1;
	pNodo buffer = first;
	char opcion = getch();
	switch(opcion){
		case '1':{
			printf("\n\n\tMatr%ccula a buscar: ",161);
			scanf("%d",&matriculab);
			do{
				if(buffer->matricula == matriculab) return pos;
				else{
					pos++;
					buffer = buffer->next;
				}
			}
			while(buffer != NULL);
			break;
		}
		case '2':{
			char buf[20];
			int i;
			
			printf("\n\n\tNombre a buscar: ");
			scanf(" %[^\n]",&nombreb);
			
			for(i = 0; i < 20; i++) nombreb[i] = tolower(nombreb[i]);
			
			do{
				for(i = 0; i < 20; i++) buf[i] = tolower(buffer->nombre[i]);
				if(strncmp(buf,nombreb,20) == 0) return pos;
				else{
					pos++;
					buffer = buffer->next;
				}
			}
			while(buffer != NULL);
			break;
		}
		default: return 0;
	}

	puts("\n\tNo se encontraron coincidencias\n");
	system("pause");
	return 0;
}

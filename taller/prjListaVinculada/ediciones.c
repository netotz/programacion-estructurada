#include "_listav_.h"

pNodo first;

char editar(int pos){
	system("cls");
	int i;
	
	pNodo buffer = first;
	for(i = 1; i < pos; i++) buffer = buffer->next;
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",buffer->matricula,buffer->nombre,buffer->edad,164,buffer->peso,buffer->altura);
	for(i = 0; i < 20; i++) printf("%c",196);
	
	puts("\n\tDato a editar: ");
	printf("\t1. Matr%ccula\n",161);
	puts("\t2. Nombre");
	puts("\t3. Edad");
	puts("\t4. Peso");
	puts("\t5. Altura");
	printf("\tPulse cualquier tecla para volver al men%c principal\n",163);
	printf("\tOpci%cn: ",162);
	char opcion = getch();
	puts("\n");
	switch(opcion){
		case '1':{
			printf("\tNueva matr%ccula: ",161);
			scanf("%d",&buffer->matricula);
			break;
		}
		case '2':{
			printf("\tNuevo nombre: ");
			scanf(" %[^\n]",buffer->nombre);
			break;
		}
		case '3':{
			printf("\tNueva edad: ");
			scanf("%d",&buffer->edad);
			break;
		}
		case '4':{
			printf("\tNuevo peso: ");
			scanf("%f",&buffer->peso);
			break;
		}
		case '5':{
			printf("\tNueva altura: ");
			scanf("%f",&buffer->altura);
			break;
		}
	}
	
	return opcion;
}

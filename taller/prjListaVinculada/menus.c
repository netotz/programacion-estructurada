#include "_listav_.h"

pNodo first;

char menu(void){
	int posicion = 0;
	system("cls");
	if(first == 0) puts("Sin registros\n");
	else printf("Cantidad de registros: %d\n\n",contar());
	puts("\t1. Cargar lista");
	puts("\t2. Ingresar datos manualmente");
	puts("\t3. Generar datos aleatorios");
	puts("\t4. Editar datos");
	puts("\t5. Sobreescribir registro");
	puts("\t6. Borrar registro");
	puts("\t7. Vaciar lista");
	puts("\t8. Mostrar lista y promedios");
	puts("\tESC para salir\n");
	printf("\tOpci%cn: ",162);
	char opcion = getch();
	switch(opcion){
		case ESC:{
			puts("Salir");
			break;
		}
		case '1':{
			cargar_lista();
			break;
		}
		case '2':{
			cargar_manual();
			system("pause");
			break;
		}
		case '3':{
			cargar_azar();
			system("pause");
			break;
		}
		case '4':{
			if(first == NULL){
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			else{
				posicion = buscar();
				if(posicion != 0){
					do{
						opcion = editar(posicion);
					}
					while(opcion > '0' and opcion < '6');
				}
			}
			break;
		}
		case '5':{
			if(first == NULL){
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			else{
				posicion = buscar();
				sobreescribir(posicion);
			}
			break;
		}
		case '6':{
			if(first == NULL){
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			else{
				posicion = buscar();
				if(posicion != 0){
					borrar(posicion);
				}
			}
			break;
		}
		case '7':{
			if(first == NULL){
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			else{
				vaciar();
				puts("Lista vaciada\n");
				system("pause");
			}
			break;
		}
		case '8':{
			if(first == NULL){
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			else imprimir();
			break;
		}
		default:{
			printf("No v%clida\n\n",160);
			system("pause");
			break;
		}
	}
	
	return opcion;
}

#include "h_struct_.h"

void menu_principal(int MAX, PERSON Alumnos[]){
	int pos;
	system("cls");
	printf("Registros a%cadidos:\t%d\n",164,limit);
	printf("Registros disponibles:\t%d\n",MAX-limit);
	printf("Total:\t%d\n\n",MAX);
	puts("\t1. Ingresar datos manualmente");
	puts("\t2. Generar datos aleatorios");
	puts("\t3. Editar datos");
	puts("\t4. Sobreescribir registro");
	puts("\t5. Borrar registro");
	puts("\t6. Vaciar lista");
	puts("\t7. Mostrar lista y promedios");
	puts("\t0. Salir");
	printf("\tOpci%cn: ",162);
	opcion = getch();
	switch(opcion){
		case '0':{
			puts("Salir");
			exit(0);
			break;
		}
		case '1':{
			if(limit < MAX) cargar_manual(Alumnos);
			else puts("Lista llena\n");
			system("pause");
			break;
		}
		case '2':{
			if(limit < MAX) cargar_azar(Alumnos);
			else puts("Lista llena\n");
			system("pause");
			break;
		}
		case '3':{
			if(limit > 0){
				pos = buscar(Alumnos);
				if(pos >= 0){
					do{
						editar(pos, Alumnos);
					}
					while(opcion > '0' and opcion < '6');
				}
			}
			else{
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			break;
		}
		case '4':{
			if(limit > 0){
				pos = buscar(Alumnos);
				if(pos >= 0) sobreescribir(pos, Alumnos);
			}
			else{
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			break;
		}
		case '5':{
			if(limit > 0){
				pos = buscar(Alumnos);
				if(pos >= 0) borrar(pos, Alumnos);
			}
			else printf("Lista vac%ca\n\n",161);
			system("pause");
			break;
		}
		case '6':{
			if(limit > 0){
				limit = 0;
				puts("Lista vaciada\n");
			}
			else printf("Lista vac%ca\n\n",161);
			system("pause");
			break;
		}
		case '7':{
			if(limit > 0) imprimir(Alumnos);
			else{
				printf("Lista vac%ca\n\n",161);
				system("pause");
			}
			break;
		}
		default:{
			printf("No v%clida\n\n",160);
			system("pause");
			break;
		}
	}
	
	return;
}

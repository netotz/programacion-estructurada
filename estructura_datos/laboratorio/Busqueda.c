 /*
 Ernesto Andrés Ortiz López		1804204
 Laboratorio Estructura de Datos		Jueves V3-V4
 Grupo 002				Salón 4-108
 
 Cocktail Sort con búsqueda de dato y posición
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define or ||

int i;
char op;

void imprimir(int cantidad, int array[]){
	for(i = 0; i < cantidad; i++) printf("%d, ",array[i]);
	printf("\b\b ");
	
	return;
}

void buscar(int cantidad, int array[]){
	int n, cont = 0;
	printf("\n\nB%csqueda de:\n\t1. Posici%cn\n\t2. N%cmero\n\tPresione cualquier tecla para salir\n\t",163,162,163);
	op = getch();
	switch(op){
		case '2':{
			printf("\nIntroduzca numero a buscar: ");
			scanf("%d",&n);
			for(i = 0; i < cantidad; i++){
				if(array[i] == n){
					printf("\tPosici%cn %d\n",162,i);
					cont++;
				}
			}
			if(cont == 0) printf("No se encontr%c ning%cn '%d'",162,163,n);
			else printf("Se encontr%c '%d', %d veces",162,n,cont);
			break;
		}
		case '1':{
			printf("\nIntroduzca la posici%cn (de 0 a %d): ",162,cantidad-1);
			scanf("%d",&n);
			if(n > cantidad-1) printf("Posici%cn inv%clida",162,160);
			else printf("Posici%cn %d = %d",162,n,array[n]);
			break;
		}
		default: return;
	}
	
	return;
}

int main(int argi, char **argc){
	int cantidad, x, max;
	srand(time(NULL));
	
	printf("Cantidad de n%cmeros enteros: ",163);
	scanf("%d",&cantidad);
	int array[cantidad];
	
	printf("\n\t1. Ingresar n%cmeros\n\t2. Generar aleatorios\n",163);
	printf("\tOpci%cn: ",162);
	op = getch();
	switch(op){
		case '2':{
			printf("\n\n\tN%cmero m%cximo posible a generar: ",163,160);
			scanf("%d",&max);
			for(i = 0; i < cantidad; i++){
				x = rand() % max + 1;
				array[i] = x;
			}
			break;
		}
		case '1':{
			printf("Escriba el numero deseado y presione Enter para siguiente\n");
			for(i = 0; i < cantidad; i++) scanf("%d",&array[i]);
			break;
		}
		default:{
			printf("\tOpci%cn no v%clida",162,160);
			printf("\n\tOpci%cn: ",162);
			break;
		}
	}
	
	printf("\n\nN%cmeros guardados: ",163);
	imprimir(cantidad, array);
	
	do buscar(cantidad,array);
	while(op == '1' or op == '2');
	
	return 0;
 }

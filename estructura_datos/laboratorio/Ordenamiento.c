 /*
 Ernesto Andrés Ortiz López		1804204
 Laboratorio Estructura de Datos		Jueves V3-V4
 Grupo 002				Salón 4-108

ORDENAMIENTO BURBUJA BIDIRECCIONAL
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int cantidad, int array[]){
	int izq = 0, der = cantidad-1, saver;
	while(izq != der){
		int i;
		for(i = izq; i < der; i++){
			if(array[i] > array[i+1]){
				saver = array[i+1];
				array[i+1] = array[i];
				array[i] = saver;
			}
		}
		der--;
		
		if(izq == der) break;
		
		for(i = der; i > izq; i--){
			if(array[i] < array[i-1]){
				saver = array[i-1];
				array[i-1] = array[i];
				array[i] = saver;
			}
		}
		izq++;
	}
	return;
}

int main(int argc, char **argv){
	int cantidad;
	srand(time(NULL));
	
	printf("Cantidad de numeros al azar: ");
	scanf("%d",&cantidad);
	int array[cantidad];
	
	printf("\nNumeros aleatorios: ");
	int i;
	for(i = 0; i < cantidad; i++){
		int x = rand() % 100 + 1;
		array[i] = x;
		printf("%d, ",array[i]);
	}
	printf("\b\b ");
	
	printf("\n\nNumeros ordenados: ");
	ordenar(cantidad, array);
	for(i = 0; i < cantidad; i++){
		printf("%d, ",array[i]);
	}
	printf("\b\b ");
	
	return 0;
 }

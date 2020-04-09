/*
Programa 48
Ernesto Andrés Ortiz López	ITS	1804204
Programación estructurada
Salón 2-204		Grupo 003
*/

#include <stdio.h>

int main(int argi, char **argc){
	int i, max, num = 1;
	printf("1,2,2,3,3,3...\n\nIngrese el numero maximo: ");
	scanf("%d",&max);
	int cantidad = ((max*max)+max)/2;
	int serie[cantidad];
	for(i = 0; i < cantidad; i++){
		serie[i] = num;
		if(i == (((num*num)+num)/2)-1) num++;
		printf("%d, ",serie[i]);
	}
	printf("\b\b ");
	
	return 0;
}

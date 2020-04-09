#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argi, char **argc){
	srand(time(NULL));
	int i, j;
	int fila, columna;
//	printf("Introducir cantidad de filas, columnas: ");
//	scanf("%d,%d",&fila,&columna);
	int x = rand() % 50 + 10;
	fila = x/10;
	columna = x/10;
	int matriz[fila][columna];
	
	printf("\n");
	int primer = 0;
	for(i = 0; i < fila; i++){
		if(primer == 0){
			printf("   ");
			for(j = 0; j < columna; j++) printf("%d ",j+1);
		}
		primer++;
		printf("\n%d %c",i+1,179);
		for(j = 0; j < columna*2; j++) printf(" ");
		printf("%c",179);
	}
	
//	printf("\n\nIntroducir datos de: ");
	for(i = 0; i < fila; i++){
//		printf("%d%c fila = ",i+1,166);
		for(j = 0; j < columna; j++){
//			scanf("%d",&matriz[i][j]);
			int x = rand() % 99 + 1;
			matriz[i][j] = x;
		}
	}
	puts("\n");
	for(i = 0; i < fila; i++){
		printf("%c",179);
		for(j = 0; j < columna; j++){
			printf("%2d   ",matriz[i][j]);
		}
		printf("\b\b%c\n",179);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Abuelita.h"

void CargaDatos( int ix, int jy, float M[ix][jy]){
	int i, j;
	for(i = 0; i < ix; i++ ){
		for(j = 0; j < jy; j++){
			printf("Dame el elemento [%d][%d] -> ", i + 1, j + 1);
			scanf("%f", &M[i][j]);
		}
	}
	return;
}

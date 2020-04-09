#include <stdio.h>
#include <stdlib.h>
#include "Abuelita.h"

void impDatos( int ix, int jy, float M[ix][jy]) {
    int i, j;
    system("cls");
    printf("\n\n\n\t\tMATRIZ ORIGINAL\n");
	for( i = 0; i < ix; i++){
		printf("\t\t");
		for( j = 0; j < jy; j++) {
			printf("\t%3.0f", M[i][j]);
		}
		printf("\n");
	}
	return;
}

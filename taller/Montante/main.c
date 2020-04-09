/*
proyect: Abuelita.dev
Proposito: demostrar el uso del metodo montante con arreglos
*/

#include <stdio.h>
#include <stdlib.h>
#include "Abuelita.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float MatOriginal[3][4], MatResult[3][4], MatTrans[3][4];
	int i, j;
	CargaDatos(3, 4, MatOriginal);
    impDatos(3, 4, MatOriginal);
    procMontante(3,4,MatOriginal, MatResult, MatTrans);
    system("pause");
    impDatos(3, 4, MatResult);
   	return 0;
}

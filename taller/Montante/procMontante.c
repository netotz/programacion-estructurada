#include <stdio.h>
#include <stdlib.h>
#include "Abuelita.h"

void procMontante( int ix, int jy, float Mo[ix][jy], float Mr[ix][jy], float Mt[ix][jy]){
	 float Pant, Pact;
	 int Iteracion = 0, i, j;
	 for( i = 0; i < ix; i++ ) {
	 	for( j = 0; j < jy; j++ ){
	 		Mr[i][j] = Mo[i][j];
		 }
	 }
	 Pant = 1;
	 while( Iteracion < ix ){
	 	Pact = Mr[Iteracion][Iteracion];
	 	for(j = 0; j < jy; j++ ){
	 		Mt[Iteracion][j] = Mr[Iteracion][j];
		}
		for(i = 0; i < ix; i++ ){
			if( i != Iteracion ) {	
			  Mt[i][Iteracion] = 0.0;
			} else {
			  Mt[i][i] = Pact;
			}
		}
		for( i = 0; i < ix; i++ ){
			if( i != Iteracion ) {
			   for( j = 0; j < jy; j++ ){
				  if( j != Iteracion ) {
					 Mt[i][j] = ((Mr[i][j] * Pact) - (Mr[Iteracion][j] * Mr[i][Iteracion])) / Pant;
				  }
				}
			}
		}
		for( i = 0; i < ix; i++ ){
			for( j = 0; j < jy; j++ ){
				Mr[i][j] = Mt[i][j];
			}
		}
		Pant = Pact; //NO SE DECLARABA CÓMO IBA A CAMBIAR EL 'PIVOTE ANTERIOR' 
		Iteracion++;
	 }
	 for( i = 0; i < ix; i++ ){
	 	for( j = 0; j < jy; j++ ){
	 		Mr[i][j] = Mr[i][j] / Pact;
		 }
	 }
	 return;
}

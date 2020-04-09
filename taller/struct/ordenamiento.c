#include "h_struct_.h"

void ordenar_matricula(PERSON Alumnos[]){
	int izq = 0, der = limit-1;
	PERSON alumno_orden[limit], saver;
	for(i = 0; i < limit; i++) alumno_orden[i] = Alumnos[i];
	while(izq != der){
		for(i = izq; i < der; i++){
			if(alumno_orden[i].matricula < alumno_orden[i+1].matricula){
				saver = alumno_orden[i+1];
				alumno_orden[i+1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		der--;
		if(izq == der) break;
		
		for(i = der; i > izq; i--){
			if(alumno_orden[i].matricula > alumno_orden[i-1].matricula){
				saver = alumno_orden[i-1];
				alumno_orden[i-1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		izq++;
	}
	imprimir(alumno_orden);
	
	return;
}

void ordenar_nombre(PERSON Alumnos[]){
	int izq = 0, der = limit-1;
	PERSON alumno_orden[limit], saver;
	for(i = 0; i < limit; i++) alumno_orden[i] = Alumnos[i];
	while(izq != der){
		for(i = izq; i < der; i++){
			if(alumno_orden[i].nombre[0] > alumno_orden[i+1].nombre[0]){
				saver = alumno_orden[i+1];
				alumno_orden[i+1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		der--;
		if(izq == der) break;
		
		for(i = der; i > izq; i--){
			if(alumno_orden[i].nombre[0] < alumno_orden[i-1].nombre[0]){
				saver = alumno_orden[i-1];
				alumno_orden[i-1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		izq++;
	}
	imprimir(alumno_orden);
	
	return;
}

void ordenar_edad(PERSON Alumnos[]){
	int izq = 0, der = limit-1;
	PERSON alumno_orden[limit], saver;
	for(i = 0; i < limit; i++) alumno_orden[i] = Alumnos[i];
	while(izq != der){
		for(i = izq; i < der; i++){
			if(alumno_orden[i].edad < alumno_orden[i+1].edad){
				saver = alumno_orden[i+1];
				alumno_orden[i+1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		der--;
		if(izq == der) break;
		
		for(i = der; i > izq; i--){
			if(alumno_orden[i].edad > alumno_orden[i-1].edad){
				saver = alumno_orden[i-1];
				alumno_orden[i-1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		izq++;
	}
	imprimir(alumno_orden);
	
	return;
}

void ordenar_peso(PERSON Alumnos[]){
	int izq = 0, der = limit-1;
	PERSON alumno_orden[limit], saver;
	for(i = 0; i < limit; i++) alumno_orden[i] = Alumnos[i];
	while(izq != der){
		for(i = izq; i < der; i++){
			if(alumno_orden[i].peso < alumno_orden[i+1].peso){
				saver = alumno_orden[i+1];
				alumno_orden[i+1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		der--;
		if(izq == der) break;
		
		for(i = der; i > izq; i--){
			if(alumno_orden[i].peso > alumno_orden[i-1].peso){
				saver = alumno_orden[i-1];
				alumno_orden[i-1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		izq++;
	}
	imprimir(alumno_orden);
	
	return;
}

void ordenar_altura(PERSON Alumnos[]){
	int izq = 0, der = limit-1;
	PERSON alumno_orden[limit], saver;
	for(i = 0; i < limit; i++) alumno_orden[i] = Alumnos[i];
	while(izq != der){
		for(i = izq; i < der; i++){
			if(alumno_orden[i].altura < alumno_orden[i+1].altura){
				saver = alumno_orden[i+1];
				alumno_orden[i+1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		der--;
		if(izq == der) break;
		
		for(i = der; i > izq; i--){
			if(alumno_orden[i].altura > alumno_orden[i-1].altura){
				saver = alumno_orden[i-1];
				alumno_orden[i-1] = alumno_orden[i];
				alumno_orden[i] = saver;
			}
		}
		izq++;
	}
	imprimir(alumno_orden);
	
	return;
}

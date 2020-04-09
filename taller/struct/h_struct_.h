#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#ifndef _STRUCT_
	#define _STRUCT_
#endif

#define or ||
#define and &&

int i, j, limit;
char opcion;

typedef struct{
	int matricula, edad;
	char nombre[20];
	float peso, altura;
} PERSON;

void menu_principal();

void cargar_azar();
void cargar_manual();

void imprimir();
float promedio();
void fimprimir();

int buscar();

void editar();
void borrar();

void ordenar_matricula();
void ordenar_nombre();
void ordenar_edad();
void ordenar_peso();
void ordenar_altura();

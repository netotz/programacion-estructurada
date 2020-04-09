#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <sys/stat.h>

#ifndef prjListaVinculada_H
#	define prjListaVinculada_H
	
	#define ESC 27
	#define and &&

	extern int i, j;
	extern char opcion;
	
	typedef struct Lista{
		int matricula, edad;
		char nombre[20];
		float peso, altura;
		struct Lista *next, *prev;
	};
	typedef struct Lista *pNodo;
	
	extern pNodo first, last, buffer;
	
	char menu(void);
	
	void cargar_azar(void);
	void cargar_manual(void);
	void asignar(pNodo);
	void sobreescribir(int);
	void cargar_lista(void);
	
	void leer(const char*, const char*);
	
	void imprimir(void);
	float promedio(const char*);
	void fimprimir(FILE*, const char*);
	
	int buscar(void);
	
	char editar(int);
	
	void borrar(int);
	void vaciar(void);
	
	void ordenar_matricula(void);
	void ordenar_nombre(void);
	void ordenar_edad(void);
	void ordenar_peso(void);
	void ordenar_altura(void);
	
	int contar(void);
	
	void respaldar(void);
	void crear_txt(const char*, const char*);

#endif //prjListaVinculada_H

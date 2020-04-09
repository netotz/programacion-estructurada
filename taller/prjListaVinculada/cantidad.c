#include "_listav_.h"

pNodo first;

int contar(void){
	int cantidad = 0;
	pNodo buffer = first;
	while(buffer != NULL){
		cantidad++;
		buffer = buffer->next;
	}
	
	return cantidad;
}

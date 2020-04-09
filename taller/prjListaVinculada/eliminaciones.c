#include "_listav_.h"

pNodo first, last;

void borrar(int pos){
	pNodo loc = first;
	int i;
	
	for(i = 1; i < pos; i++) loc = loc->next;
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",loc->matricula,loc->nombre,loc->edad,164,loc->peso,loc->altura);
	for(i = 0; i < 20; i++) printf("%c",196);

	if(pos == 1){
		first = first->next;
		if(first == NULL) last = NULL;
		else first->prev = NULL;
	}
	else if(pos == contar()){ 
		loc = last;
		last->prev->next = NULL;
		last = last->prev;
	}
	else{
		loc->prev->next = loc->next;
		loc->next->prev = loc->prev;
	}
	
	free(loc);
	
	puts("\n\tRegistro eliminado\n");
	system("pause");
	
	return;
}

void vaciar(void){
	if(first = NULL) return;
	
	pNodo buffer = first;
	while(buffer != NULL){
		first = buffer->next;
		free(buffer);
		buffer = first;
	}
	
	first = NULL;
	last = NULL;
	return;
}

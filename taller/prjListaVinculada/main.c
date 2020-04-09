#include "_listav_.h"

pNodo first = NULL;
pNodo last = NULL;

int main(int argi, char **argc){
	srand(time(NULL));
	
	char opcion;
	
	do{
		opcion = menu();
	}
	while(opcion != ESC);
	
	vaciar();
	return 0;
}

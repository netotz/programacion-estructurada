#include <stdio.h>

int main(int argc, char **argv){
	int arreglo[11];
	int i;
	for(i = 0; i < 11; i++)
		arreglo[i] = (i + 1) * 11;

	printf("\nArreglo con los primeros 11 multiplos del once: ");
	for(i = 0; i < 11; i++)
		printf("%d, ", arreglo[i]);
	printf("\b\b ");
	
	return 0;
}

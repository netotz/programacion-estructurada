#include <stdio.h>

int main(int argi, char **argc){
	int array[5];
	int i, mayor = 0, menor = 30000;
	for(i = 0; i < 5; i++){
		printf("Introducir numero en posicion %d: ", i);
		scanf("%d", &array[i]);
		
		if(array[i] > mayor)
			mayor = array[i];
		if(array[i] < menor)
			menor = array[i];
	}
	
	printf("\nNumero mayor: %d", mayor);
	printf("\nNumero menor: %d", menor);
	
	return 0;
}

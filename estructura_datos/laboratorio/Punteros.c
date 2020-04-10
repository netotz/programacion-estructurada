#include <stdio.h>

int main(int argc, char *argv[]){
	int x = 5;
	printf("Valor que almacena la variable 'x': %d\n",x);
	float y = 10.102;
	printf("Valor que almacena la variable 'y': %f\n",y);
	
	int *xptr = &x;
	printf("\nDireccion de memoria de 'x': %p\n",xptr);
	float *yptr = &y;
	printf("Direccion de memoria de 'y': %p\n",yptr);
	
	printf("\nAccediendo a 'x' mediante el puntero: %d\n",*xptr);
	printf("Accediendo a 'y' mediante el puntero: %f\n",*yptr);
	
	return 0;
}

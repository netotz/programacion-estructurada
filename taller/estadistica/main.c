#include "estadistica.h"

int main(int argc, char *argv[]){
	printf("10! = %.0f\n",factorial(10));
	printf("Combinacion (10  5) = %.5f\n",combinacion(10,5));
	printf("Permutacion (10  5) = %.5f\n",permutacion(10,5));
	printf("Binomial (10  5  0.5) = %.5f\n", binomial(10,5,0.54));
	printf("Raiz cuadrada de 21 = %f", raiz(21));
	return 0;
}

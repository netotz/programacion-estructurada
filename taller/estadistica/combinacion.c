#include "estadistica.h"

double combinacion(int n, int k){
	return permutacion(n,k)*(1.0/factorial(k));
}

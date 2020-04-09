#include "estadistica.h"
#include <math.h>

double binomial(int n, int x, float p){
	return combinacion(n,x)*pow(p,x)*pow(1.0-p,n-x);
}

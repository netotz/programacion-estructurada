#include "estadistica.h"

double raiz(double x){
	double f0 = x, f1 = 0.0;
	do{
		f1 = f0;
		f0 = ((x/f0)+f0)/2.0;
	}while(f1!=f0);
	return f0;
}

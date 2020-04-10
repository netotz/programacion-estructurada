#include <stdio.h>
#include <math.h>

int main(int argi, char **argc){
	float h, a, b;
	printf("Ingresar catetos separados por una coma: ");
	scanf("%f,%f",&a,&b);
	printf("Hipotenusa = %.2f",_hypot(a,b));
	
	return 0;
}

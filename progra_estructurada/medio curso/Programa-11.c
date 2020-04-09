#include <stdio.h>

int main(int argi, char **argc){
	int a,b,c;
	float prom;
	printf("Para saber si aprobo introducir\n\tCalificacion 1,2,3: ");
	scanf("%d,%d,%d",&a,&b,&c);
	prom = (a+b+c)/3;
	printf("Promedio = %.1f\t", prom);
	if(prom >= 70) printf("APROBADO");
	else printf("REPROBADO");
	
	return 0;
}

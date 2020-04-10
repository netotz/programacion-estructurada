#include <stdio.h>

int main(int argi, char **argc){
	float r;
	printf("Introducir radio de circulo: ");
	scanf("%f",&r);
	printf("Area = %.2f",(3.14159*(r*r))/2);
	
	return 0;
}

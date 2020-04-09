#include <stdio.h>

int main(){
	const float g = 9.8;
	float m, h;
	printf("Calcular energia potencial (Ep)\n\n");
	printf("Introducir masa (kg): ");
	scanf("%f", &m);
	printf("Introducir altura (m): ");
	scanf("%f", &h);
	printf("\nEp = %f J\n", m * g * h);
	
	return 0;
}

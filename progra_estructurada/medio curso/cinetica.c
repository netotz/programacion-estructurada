#include <stdio.h>

int main(){
	float m, v;
	printf("Calcular energia cinetica (Ec)\n\n");
	printf("Introducir velocidad (m/s): ");
	scanf("%f", &v);
	printf("Introducir masa (kg): ");
	scanf("%f", &m);
	printf("\nEc = %f J\n", (m * v * v) / 2);

	return 0;
}

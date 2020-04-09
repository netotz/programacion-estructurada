#include <stdio.h>

int main(int argi, char **argc){
	int i, depto;
	float hora, sueldo;
	char apellido[20], nombre[20];
	
	printf("TERRA-GYRO EMPRESAS\n\n");
	
	printf("\t\t\t\tSueldo\n\t");
	for(i=0; i < 60; i++) printf("%c",196);
	printf("\n\t   Departamento\t\t     Hora normal\tHora extra\n\t");
	for(i=0; i < 60; i++) printf("%c",196);
	printf("\n\t1. Recursos humanos\t\t$23.25\t\t$46.5\n");
	printf("\t2. Produccion\t\t\t$25.2\t\t$50.4\n");
	printf("\t3. Sistemas\t\t\t$24.3\t\t$48.6\n\t");
	for(i=0; i < 60; i++) printf("%c",196);
	printf("\n\tLas horas normales de trabajo a la semana son 40.\n\tDespues de estas se pagan como extras.");
	
	printf("\n\n");
	do{
		printf("Departamento en el que trabaja: ");
		scanf("%d",&depto);
	}while(depto<1 || depto>3);
	printf("Horas trabajadas a la semana: ");
	scanf("%f",&hora);
	printf("\nApellido: ");
	scanf("%s",&apellido);
	printf("Nombre: ");
	scanf("%s",&nombre);
	
	if(hora<=40){
		switch(depto){
			case 1: sueldo = hora*23.25; break;
			case 2: sueldo = hora*25.2; break;
			case 3: sueldo = hora*24.3; break;
		}
	}
	else{
		switch(depto){
			case 1: sueldo = 40*23.25 + (hora-40)*46.5; break;
			case 2: sueldo = 40*25.2 + (hora-40)*50.4; break;
			case 3: sueldo = 40*24.3 + (hora-40)*48.6; break;
		}
	}
	
	printf("\n\tRECIBO DE NOMINA\n\t");
	for(i=0; i < 20; i++) printf("%c",205);
	printf("\n\t%s %s\n\n",apellido,nombre);
	printf("\tSueldo semanal = $%.2f",sueldo);

	
	return 0;
}

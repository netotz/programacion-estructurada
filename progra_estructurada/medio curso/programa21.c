#include <stdio.h>
#include <string.h>

int main(int argi, char **argc){
	int i, zona;
	float kW;
	char apellido[20], nombre[20];
	
	printf("COMISION FEDERAL DE ELECTRICIDAD\tArea metropolitana de Nuevo Leon\n\n");
	
	printf("\t\tTarifas\n\t");
	for(i=0; i < 33; i++) printf("%c",196);
	printf("\n\t   Zona\t\t    Precio por kW\n\t");
	for(i=0; i < 33; i++) printf("%c",196);
	printf("\n\t1. Monterrey\t\t$0.85\n");
	printf("\t2. San Pedro\t\t$0.90\n");
	printf("\t3. San Nicolas\t\t$0.87\n");
	printf("\t4. Guadalupe\t\t$0.82\n\t");
	for(i=0; i < 33; i++) printf("%c",196);
	
	printf("\n\n");
	do{
		printf("\rZona en la que vive: ");
		scanf("%d",&zona);
	}while(zona<1 || zona>4);
	printf("Kilovatios (kW) consumidos: ");
	scanf("%f",&kW);
	printf("\nApellido: ");
	scanf("%s",&apellido);
	printf("Nombre: ");
	scanf("%s",&nombre);

	printf("\n\tTICKET\n\t");
	for(i=0; i < (strlen(apellido)+strlen(nombre)+1); i++) printf("%c",205);
	printf("\n\t%s %s\n\n",apellido,nombre);
	switch(zona){
		case 1: printf("\tTOTAL = $%.2f",kW*0.85); break;
		case 2: printf("\tTOTAL = $%.2f",kW*0.9); break;
		case 3: printf("\tTOTAL = $%.2f",kW*0.87); break;
		case 4: printf("\tTOTAL = $%.2f",kW*0.82); break;
	}
	
	return 0;
}

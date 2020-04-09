#include <stdio.h>
#include <string.h>

int main(int argi, char **argc){
	int i, zona;
	float m3, total;
	char apellido[20], nombre[20];
	
	printf("COMISION NACIONAL DEL AGUA\tArea metropolitana de Nuevo Leon\n\n");
	printf("Los primeros 20 m%c tienen un costo fijo de $50.\nSi el volumen excede se aplica dependiendo:\n\t",252);
	for(i=0; i < 40; i++) printf("%c",196);
	printf("\n\t\t\tTarifas\n\t");
	for(i=0; i < 40; i++) printf("%c",196);
	printf("\n\t   Zona\t\t           Precio por m%c\n\t",252);
	for(i=0; i < 40; i++) printf("%c",196);
	printf("\n\t1. Monterrey\t\t\t$3\n");
	printf("\t2. San Nicolas\t\t\t$3.25\n");
	printf("\t3. Santa Catarina\t\t$2.75\n");
	printf("\t4. Escobedo\t\t\t$2.85\n\t");
	for(i=0; i < 40; i++) printf("%c",196);
	
	printf("\n\n");
	do{
		printf("\rZona en la que vive: ");
		scanf("%d",&zona);
	}while(zona<1 || zona>4);
	printf("Metros cubicos (m%c) consumidos: ",252);
	scanf("%f",&m3);
	printf("\nApellido: ");
	scanf("%s",&apellido);
	printf("Nombre: ");
	scanf("%s",&nombre);
	
	for(i=0; i < 20; i++){		//si es minúscula hacer mayúscula
		if(apellido[i] >= 97 && apellido[i] <= 122) apellido[i] -= 32;
		if(nombre[i] >= 97 && nombre[i] <= 122) nombre[i] -= 32;
	}
	
	if(m3 > 20){
		switch(zona){
			case 1: total = m3*3; break;
			case 2: total = m3*3.25; break;
			case 3: total = m3*2.75; break;
			case 4: total = m3*2.85; break;
		}
	}else total = 50;
	
	printf("\n\tTICKET\n\t");
	for(i=0; i < (strlen(apellido)+strlen(nombre)+1); i++) printf("%c",205);
	printf("\n\t%s %s\n\n",apellido,nombre);
	printf("\tTOTAL = $%.2f\n\n",total);
	
	return 0;
}

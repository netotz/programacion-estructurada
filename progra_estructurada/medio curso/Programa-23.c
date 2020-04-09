#include <stdio.h>
#include <string.h>

int main(int argi, char **argc){
	int i, articulo, cantidad;
	float total;
	char apellido[20], nombre[20];
	
	printf("\tPAPELERIA 'El Perro'\n\n");
	
	printf("\tArticulos en venta\n\t");
	for(i=0; i < 33; i++) printf("%c",196);
	printf("\n\t1. Libreta\t\t$8.50\n");
	printf("\t2. Pluma\t\t$2.50\n");
	printf("\t3. Lapiz\t\t$2\n");
	printf("\t4. Borrador\t\t$1.50\n");
	printf("\t5. Sacapuntas\t\t$1\n\t");
	for(i=0; i < 33; i++) printf("%c",196);
	
	printf("\n\n\tDESCUENTOS:\n\t15%% en la compra de 10 a 25 articulos\n\t25%% en la compra de mas de 25 articulos\n\n");
	do{
		printf("\rArticulo a comprar: ");
		scanf("%d",&articulo);
	}while(articulo<1 || articulo>5);
	printf("Cantidad a comprar: ");
	scanf("%d",&cantidad);
	printf("\nApellido: ");
	scanf("%s",&apellido);
	printf("Nombre: ");
	scanf("%s",&nombre);
	
	for(i=0; i < 20; i++){		//si es minúscula hacer mayúscula
		if(apellido[i] >= 97 && apellido[i] <= 122) apellido[i] -= 32;
		if(nombre[i] >= 97 && nombre[i] <= 122) nombre[i] -= 32;
	}

	switch(articulo){
		case 1: total = cantidad*8.5; break;
		case 2: total = cantidad*2.5; break;
		case 3: total = cantidad*2; break;
		case 4: total = cantidad*1.5; break;
		case 5: total = cantidad; break;
	}
	if(cantidad >= 10 && cantidad <= 25) total -= total*0.15;
	else if(cantidad > 25) total -= total*0.25;
	
	printf("\n\tTICKET\n\t");
	for(i=0; i < (strlen(apellido)+strlen(nombre)+1); i++) printf("%c",205);
	printf("\n\t%s %s\n\n",apellido,nombre);
	printf("\tTOTAL = $%.2f\n\n",total);
	
	return 0;
}

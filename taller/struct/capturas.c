#include "h_struct_.h"

void cargar_azar(PERSON alumno[]){
	int cantidad;
	float weight, height;
	char letra;
	
	bool vocal;
	i = rand() % 2;
	if(i == 0) vocal = false;
	else vocal = true;
	
	const int vocales[5] = {'a','e','i','o','u'};
	const int consonantes[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

		alumno[limit].matricula = (3125/256)*(rand() % RAND_MAX) + 1600000;

		cantidad = rand() % 7 + 3;
		for(j = 0; j < cantidad; j++) alumno[limit].nombre[j] = 32;
		for(j = 0; j < cantidad; j++){
			if(vocal == false){
				letra = rand() % 21;
				alumno[limit].nombre[j] = consonantes[letra];
			}
			else{
				letra = rand() % 5;
				alumno[limit].nombre[j] = vocales[letra];
			}
			vocal = !vocal;
		}
		alumno[limit].nombre[0] -= 32;
		alumno[limit].nombre[cantidad] = '\0';
			
		alumno[limit].edad = rand() % 4 + 16;
			
		weight = fmod(rand(),5001) + 5000;
		alumno[limit].peso = weight/100;
			
		height = fmod(rand(),5001) + 15000;
		alumno[limit].altura = height/10000;
			
		limit++;
			
		puts("Registro agregado\n");
	
	return;
}

void cargar_manual(PERSON alumno[]){
	system("cls");
	printf("\tMatr%ccula: ",161);
	scanf("%d",&alumno[limit].matricula);
	
	printf("\tNombre: ");
	scanf(" %[^\n]",&alumno[limit].nombre);
				
	printf("\tEdad: ");
	scanf("%d",&alumno[limit].edad);
			
	printf("\tPeso (kg): ");
	scanf("%f",&alumno[limit].peso);
				
	printf("\tAltura (m): ");
	scanf("%f",&alumno[limit].altura);
	
	limit++;
		
	puts("\tRegistro agregado\n");
	return;
}

void sobreescribir(int pos, PERSON alumno[]){
	system("cls");
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",alumno[pos].matricula,alumno[pos].nombre,alumno[pos].edad,164,alumno[pos].peso,alumno[pos].altura);
	for(i = 0; i < 20; i++) printf("%c",196);
	printf("\n\tNueva matr%ccula: ",161);
	
	scanf("%d",&alumno[pos].matricula);
	
	printf("\tNuevo nombre: ");
	scanf(" %[^\n]",&alumno[pos].nombre);
				
	printf("\tNueva edad: ");
	scanf("%d",&alumno[pos].edad);
			
	printf("\tNuevo peso (kg): ");
	scanf("%f",&alumno[pos].peso);
				
	printf("\tNueva altura (m): ");
	scanf("%f",&alumno[pos].altura);
	
	system("cls");
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",alumno[pos].matricula,alumno[pos].nombre,alumno[pos].edad,164,alumno[pos].peso,alumno[pos].altura);
	for(i = 0; i < 20; i++) printf("%c",196);
		
	puts("\n\n\tRegistro actualizado\n");
	return;
}

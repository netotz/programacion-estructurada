#include "_listav_.h"

pNodo nuevo, first, last, buffer;
int i;

void cargar_azar(void){
	nuevo = (pNodo)malloc(sizeof(struct Lista));
	if(nuevo == NULL){
		perror("Sin memoria disponible\n\n");
		system("pause");
		return;
	}
	
	int largo, j;
	float weight, height;
	char letra;	
	bool vocal;
	i = rand() % 2;
	if(i == 0) vocal = false;
	else vocal = true;
	
	const int vocales[5] = {'a','e','i','o','u'};
	const int consonantes[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

		nuevo->matricula = (3125/256)*(rand() % RAND_MAX) + 1600000;

		largo = rand() % 7 + 3;
		for(j = 0; j < largo; j++) nuevo->nombre[j] = 32;
		for(j = 0; j < largo; j++){
			if(vocal == false){
				letra = rand() % 21;
				nuevo->nombre[j] = consonantes[letra];
			}
			else{
				letra = rand() % 5;
				nuevo->nombre[j] = vocales[letra];
			}
			vocal = !vocal;
		}
		
		nuevo->nombre[0] -= 32;
		nuevo->nombre[largo] = '\0';
			
		nuevo->edad = rand() % 4 + 16;
			
		weight = fmod(rand(),4999) + 5000;
		nuevo->peso = weight/100;
			
		height = fmod(rand(),4999) + 15000;
		nuevo->altura = height/10000;
		
		puts("Registro agregado\n");
		
	asignar(nuevo);
		
	
	return;
}

void cargar_manual(void){
	nuevo = (pNodo)malloc(sizeof(struct Lista));
	if(nuevo == NULL){
		perror("Sin memoria disponible");
		puts("");
		system("pause");
		return;
	}
	
	system("cls");
	puts("Nuevo registro\n");
	printf("\tMatr%ccula: ",161);
	scanf("%d",&nuevo->matricula);
	
	printf("\tNombre: ");
	scanf(" %[^\n]",nuevo->nombre);
				
	printf("\tEdad: ");
	scanf("%d",&nuevo->edad);
			
	printf("\tPeso (kg): ");
	scanf("%f",&nuevo->peso);
				
	printf("\tAltura (m): ");
	scanf("%f",&nuevo->altura);
	
	puts("\tRegistro agregado\n");
		
	asignar(nuevo);
	
	return;
}

void asignar(pNodo _nuevo){
	if(first == NULL and last == NULL){
		first = _nuevo;
		last = _nuevo;
		first->prev = NULL;
		last->next = NULL;
		return;
	}
		
	buffer = last;
	last->next = _nuevo;
	last = last->next;
	last->next = NULL;
	last->prev = buffer;
	
	return;
}

void sobreescribir(int pos){
	if(pos == 0) return;
	buffer = first;
	for(i = 1; i < pos; i++) buffer = buffer->next;
	system("cls");
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",buffer->matricula,buffer->nombre,buffer->edad,164,buffer->peso,buffer->altura);
	for(i = 0; i < 20; i++) printf("%c",196);
	printf("\n\tNueva matr%ccula: ",161);
	
	scanf("%d",&buffer->matricula);
	
	printf("\tNuevo nombre: ");
	scanf(" %[^\n]",buffer->nombre);
				
	printf("\tNueva edad: ");
	scanf("%d",&buffer->edad);
			
	printf("\tNuevo peso (kg): ");
	scanf("%f",&buffer->peso);
				
	printf("\tNueva altura (m): ");
	scanf("%f",&buffer->altura);
	
	system("cls");
	printf("\n\t%d     %s\n\t%d a%cos\n\t%.1f kg     %.2f m\n\t",buffer->matricula,buffer->nombre,buffer->edad,164,buffer->peso,buffer->altura);
	for(i = 0; i < 20; i++) printf("%c",196);
	
	puts("\n\n\tRegistro actualizado\n");
	system("pause");

	return;
}

void cargar_lista(void){
	char namedir[10];
	namedir[0] = '\0';
	printf("\n\n\tNombre de carpeta donde se encuentra la lista (debe estar en el mismo directorio de este ejecutable): ");
	scanf(" %[^\n]",&namedir);
	
	int check = mkdir(namedir);
	if(check >= 0){
		puts("\n\tError: Carpeta no encontrada\n");
		rmdir(namedir);
		system("pause");
		return;
	}
	else{
		vaciar();
		char ctxt[] = "cantidad.txt";
		char mtxt[] = "matriculas.txt";
		char ntxt[] = "nombres.txt";
		char etxt[] = "edades.txt";
		char ptxt[] = "pesos.txt";
		char atxt[] = "alturas.txt";
		leer(namedir, ctxt);
		leer(namedir, mtxt);
		leer(namedir, ntxt);
		leer(namedir, etxt);
		leer(namedir, ptxt);
		leer(namedir, atxt);
		imprimir();
	}
	
	return;
}

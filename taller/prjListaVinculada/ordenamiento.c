#include "_listav_.h"

pNodo buffer2, buffer, first;
int auxi;
char auxc[20];
float auxf;
bool orden = true;

void ordenar_matricula(void){
	buffer = first;
	while(buffer->next != NULL){
		buffer2 = buffer->next;
		while(buffer2 != NULL){
			if(orden == true){
				if(buffer->matricula > buffer2->matricula){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			else{
				if(buffer->matricula < buffer2->matricula){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			buffer2 = buffer2->next;
		}
		buffer = buffer->next;
	}	
	orden = !orden;
	imprimir();
	
	return;
}

void ordenar_nombre(void){
	buffer = first;
	while(buffer->next != NULL){
		buffer2 = buffer->next;
		while(buffer2 != NULL){
			if(orden == true){
				i = 0;
				while(buffer->nombre[i] == buffer2->nombre[i]) i++;
				if(buffer->nombre[i] > buffer2->nombre[i]){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
								
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
							
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
							
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
							
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			else{
				i = 0;
				while(buffer->nombre[i] == buffer2->nombre[i]) i++;
				if(buffer->nombre[i] < buffer2->nombre[i]){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			buffer2 = buffer2->next;
		}
		buffer = buffer->next;
	}	
	orden = !orden;
	imprimir();
	
	return;
}

void ordenar_edad(void){
	buffer = first;
	while(buffer->next != NULL){
		buffer2 = buffer->next;
		while(buffer2 != NULL){
			if(orden == true){
				if(buffer->edad > buffer2->edad){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			else{
				if(buffer->edad < buffer2->edad){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			buffer2 = buffer2->next;
		}
		buffer = buffer->next;
	}	
	orden = !orden;
	imprimir();
	
	return;
}

void ordenar_peso(void){
	buffer = first;
	while(buffer->next != NULL){
		buffer2 = buffer->next;
		while(buffer2 != NULL){
			if(orden == true){
				if(buffer->peso > buffer2->peso){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			else{
				if(buffer->peso < buffer2->peso){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			buffer2 = buffer2->next;
		}
		buffer = buffer->next;
	}	
	orden = !orden;
	imprimir();
	
	return;
}

void ordenar_altura(void){
	buffer = first;
	while(buffer->next != NULL){
		buffer2 = buffer->next;
		while(buffer2 != NULL){
			if(orden == true){
				if(buffer->altura > buffer2->altura){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			else{
				if(buffer->altura < buffer2->altura){
					auxi = buffer2->matricula;
					buffer2->matricula = buffer->matricula;
					buffer->matricula = auxi;
						
					strcpy(auxc,buffer2->nombre);
					strcpy(buffer2->nombre,buffer->nombre);
					strcpy(buffer->nombre,auxc);
						
					auxi = buffer2->edad;
					buffer2->edad = buffer->edad;
					buffer->edad = auxi;
						
					auxf = buffer2->peso;
					buffer2->peso = buffer->peso;
					buffer->peso = auxf;
						
					auxf = buffer2->altura;
					buffer2->altura = buffer->altura;
					buffer->altura = auxf;
				}
			}
			buffer2 = buffer2->next;
		}
		buffer = buffer->next;
	}	
	orden = !orden;
	imprimir();
	
	return;
}

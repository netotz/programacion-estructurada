 /*
 LISTA ENLAZADA SIMPLE
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 struct _agenda {
        char nombre[50];
        char telefono[25];
        struct _agenda *siguiente;
};
 
struct _agenda *primero, *ultimo;
 
void mostrar_menu(){
      printf("\n\nMenu:\n=====\n\n");
      printf("1.- A�adir elementos\n");
      printf("3.- Mostrar lista\n");
      printf("4.- Salir\n\n");
      printf("Escoge una opcion: ");
	  return;
}
 
 /* Con esta funci�n a�adimos un elemento al final de la lista */
 void anadir_elemento() {
      struct _agenda *nuevo;
 
      /* reservamos memoria para el nuevo elemento */
      nuevo = (struct _agenda *) malloc (sizeof(struct _agenda));
      if(nuevo == NULL) printf( "No hay memoria disponible!\n");
 
      printf("\nNuevo elemento:\n");
      printf("Nombre: ");
      gets(nuevo -> nombre);
      printf("Telefono: ");
      gets(nuevo -> telefono);
 
      /* el campo siguiente va a ser NULL por ser el �ltimo elemento
         de la lista */
      nuevo -> siguiente = NULL;
 
      /* ahora metemos el nuevo elemento en la lista. lo situamos
         al final de la lista */
      /* comprobamos si la lista est� vac�a. si primero==NULL es que no
         hay ning�n elemento en la lista. tambi�n vale ultimo==NULL */
      if (primero == NULL) {
         printf("Primer elemento\n");
         primero = nuevo;
         ultimo = nuevo;
         }
      else {
           /* el que hasta ahora era el �ltimo tiene que apuntar al nuevo */
           ultimo->siguiente = nuevo;
           /* hacemos que el nuevo sea ahora el �ltimo */
           ultimo = nuevo;
      }
    return;
 }
 
 void mostrar_lista() {
      struct _agenda *auxiliar; /* lo usamos para recorrer la lista */
      int i;
 
      i = 0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while(auxiliar != NULL){
            printf("Nombre: %s\nTelefono: %s\n\n",auxiliar -> nombre, auxiliar -> telefono);
            auxiliar = auxiliar -> siguiente;
            i++;
      }
      if(i == 0) printf( "\nLa lista esta vacia!!\n" );
      return;
 }
 
 int main(int argc, char **argv){
     char opcion;
 
     primero = (struct _agenda *) NULL;
     ultimo = (struct _agenda *) NULL;
     do{
         mostrar_menu();
         opcion = getch();
             switch (opcion) {
                case '1': anadir_elemento();
                       break;
                case '3': mostrar_lista(primero);
                        break;
                case '4': exit( 1 );
                default: printf( "Opcion no valida\n" );
                         break;
             }
     } while (opcion != '4');
 }

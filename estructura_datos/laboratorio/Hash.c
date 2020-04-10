#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define size 100

//Estructura que contendra cada celda de la tabla guardando los datos del //estudiante que se introduciran
// por medio del teclado
struct infoalumno
{
       char nombre[50];
       char carnet[10];
       char telefono[9];
       char direccion[50];
       int esAlta;
};
typedef struct infoalumno alumno;

//Declaracion de la tabla hash

struct tipotabla
{
       alumno *tabla[size];
       int elementos;
       double factorcarga;/*declaramos un factor de carga puesto que una tabla hash se vuelve ineficiente cuando sobrepasa el 50% */
};
typedef struct tipotabla tabladispersa;

/* Declaracion de funciones*/

void CrearTabla(tabladispersa *);
void insertar(tabladispersa*, alumno);
alumno *buscar(tabladispersa*, char *);
int eliminar(tabladispersa *, char *);
long transforma(char *);
int direccion(tabladispersa *, char *);
void flush();

int main(int argc, char **argv)
{
      int op, res, i, p;
      char clave[50];
      alumno datos, *prt;
      tabladispersa tabla[size], n;
      CrearTabla(tabla);
      while(1){
        printf("\nSeleccione la operacion a realizar:\n");
        printf("\n1.Insertar Elemento\n2.Buscar un elemento");
        printf("\n3-Eliminar un elemento\n4-Salir\n");
        scanf("%d",&op);
        switch(op)
        {
          case 1:
               printf("\nNombre del estudiante: ");
               flush();
               gets(datos.nombre);
               printf("Carnet del estudiante: ");
               flush();
               gets(datos.carnet);
               printf("Telefono del estudiante: ");
               flush();
               gets(datos.telefono);
               printf("Direccion del estudiante: ");
               flush();
               gets(datos.direccion);
         
               p = direccion(tabla , datos.carnet);
               printf("\n\nLa clave hash generada es: %d\n",p);
               insertar(tabla, datos);
          break;
          case 2:
               puts("\nIntroduzca el carnet del estudiante que desea buscar");
               flush();
               scanf("%s",&clave);
               prt = buscar(tabla, clave);
               if(prt){
                 puts("\nDatos del estudiante:\n");
                 printf("Nombre: %s\n",prt->nombre);
                 printf("Carnet %s\n",prt->carnet);
                 printf("No de telefono %s\n",prt->telefono);
                 printf("Direccion: %s\n",prt->direccion);
               
               }
               else
                 puts("No existe ese estudiante en este registro");
          break;
          case 3:
               puts("\nDigite el dato a eliminar de la tabla:");
               flush();
               scanf("%s",&clave);
               i = eliminar(tabla, clave);
               if(i!=1)
               puts("\nEliminacion con exito");
               else
               puts("\nError en la eliminacionn");
          break;
          case 4:
               return 0;
          break;
        }
      }
      return 0;
}
/* Crea una tabla hash para trabajar */

void CrearTabla(tabladispersa *t)
{
     int j;
     for(j=0;j<size;j++)
     {
          t->tabla[j] == NULL;
     }
     t->elementos = 0;
     t->factorcarga = 0.0;
}
/* transforma los caracteres de la clave en valores enteros*/
long transforma(char *clave)
{
     int j;
     long d = 0;
     for(j=0;j<strlen(clave);j++)
     {
       d = d * 27 + clave[j];
     }
return ((d>=0) ? d: -d);

/* dirección recibe la tabladispersa y la clave para colocar esta ultima en la tabla*/
}
int direccion(tabladispersa *t, char *clave){
    int i=0;
    long p, d;
    d = transforma(clave);
    p = d % size;
    while(t->tabla[p] != NULL && strcmp(t->tabla[p]->carnet, clave) !=0)
    {
      i++;
      p = p + i * i;
      p = p % size;
    }
return (int)p;
}
/* Inserta los datos que representa la clave en la tabla hash*/
void insertar(tabladispersa *t, alumno r)
{
     alumno *pr;
     int posicion;
     pr = (alumno*)malloc(sizeof(alumno));
     strcpy(pr->nombre, r.nombre);
     strcpy(pr->carnet, r.carnet);
     strcpy(pr->telefono, r.telefono);
     strcpy(pr->direccion, r.direccion);
     pr->esAlta = 1;
     posicion = direccion(t, r.carnet);
     t->tabla[posicion] = pr;
     t->elementos++;
     t->factorcarga=(t->elementos)/size;
     if(t->factorcarga > 0.5)
     {
       puts("\nFactor de Carga supera el 50% de la tabla");
     }
}
/* Busca el elemento en la tabla e imprime si lo encuentra o no */
alumno *buscar(tabladispersa *t, char *clave)
{
       alumno *pr;
       int posicion;
       posicion = direccion(t, clave);
       pr = t->tabla[posicion];
       if(pr != NULL)
       {
             if(!(pr->esAlta))
             {
                 pr = NULL;
             }
       }
return pr;
}
/* Elimina el elemento de la tabla hash */
int eliminar(tabladispersa *t, char * clave)
{
     int posicion;
     posicion = direccion(t, clave);
     if(t->tabla[posicion] !=NULL)
     {
       t->tabla[posicion] -> esAlta = 0;
     }
     else
       return 1;
}
void flush()
{
     fflush(stdin);
     fflush(stdout);
}

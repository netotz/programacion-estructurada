#include<stdio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *izq;
    struct nodo *der;
};

struct nodo *raiz=NULL;

void insertar(int x)
{
    if (!existe(x))
    {
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo->info = x;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        if (raiz == NULL)
            raiz = nuevo;
        else
        {
            struct nodo *anterior, *reco;
            anterior = NULL;
            reco = raiz;
            while (reco != NULL)
            {
                anterior = reco;
                if (x < reco->info)
                    reco = reco->izq;
                else
                    reco = reco->der;
            }
            if (x < anterior->info)
                anterior->izq = nuevo;
            else
                anterior->der = nuevo;
        }
    }
}

int existe(int x)
{
    struct nodo *reco = raiz;
    while (reco != NULL)
    {
        if (x == reco->info)
                return 1;
        else
            if (x>reco->info)
                reco = reco->der;
            else
                reco = reco->izq;
    }
    return 0;
}

void cantidad(struct nodo *reco,int *cant)
{
    if (reco != NULL)
    {
        (*cant)++;
        cantidad(reco->izq, cant);
        cantidad(reco->der, cant);
    }
}

void cantidadNodosHoja(struct nodo *reco,int *cant)
{
    if (reco != NULL) {
        if (reco->izq == NULL && reco->der == NULL)
            (*cant)++;
        cantidadNodosHoja(reco->izq,cant);
        cantidadNodosHoja(reco->der,cant);
    }
}

void imprimirEntreConNivel(struct nodo *reco, int nivel)
{
    if (reco != NULL) {
        imprimirEntreConNivel(reco->izq, nivel + 1);
        printf("%i(%i) - ", reco->info, nivel);
        imprimirEntreConNivel(reco->der, nivel + 1);
    }
}

void retornarAltura(struct nodo *reco, int nivel,int *altura)
{
    if (reco != NULL)
    {
        retornarAltura(reco->izq, nivel + 1,altura);
        if (nivel>*altura)
            *altura = nivel;
        retornarAltura(reco->der, nivel + 1,altura);
    }
}

 void mayorValor()
 {
    if (raiz != NULL)
    {
        struct nodo *reco = raiz;
        while (reco->der != NULL)
            reco = reco->der;
        printf("Mayor valor del arbol:%i\n", reco->info);
    }
}

void borrarMenor()
{
     if (raiz != NULL) {
         struct nodo *bor;
         if (raiz->izq == NULL)
         {
             bor = raiz;
             raiz = raiz->der;
             free(bor);
         }
         else {
             struct nodo *atras = raiz;
             struct nodo *reco = raiz->izq;
             while (reco->izq != NULL)
             {
                 atras = reco;
                 reco = reco->izq;
             }
             atras->izq = reco->der;
             free(reco);
         }
     }
 }


void imprimirEntre(struct nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        printf("%i - ",reco->info);
        imprimirEntre(reco->der);
    }
}

void borrar(struct nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        free(reco);
    }
}


int main(int argc, char **argv){
    int cant;
    int altura=0;
    insertar(100);
    insertar(50);
    insertar(25);
    insertar(75);
    insertar(150);
    printf("Impresion entreorden: ");
    imprimirEntre(raiz);
    printf("\n");
    cant=0;
    cantidad(raiz,&cant);
    printf("Cantidad de nodos del arbol:%i\n", cant);
    cant=0;
    cantidadNodosHoja(raiz,&cant);
    printf("Cantidad de nodos hoja:%i\n", cant);
    printf("Impresion en entre orden junto al nivel del nodo:");
    imprimirEntreConNivel(raiz,1);
    printf("\n");
    altura=0;
    retornarAltura(raiz,1,&altura);
    printf("Artura del arbol:%i\n",altura);
    mayorValor();
    borrarMenor();
    printf("Luego de borrar el menor:");
    imprimirEntre(raiz);
    borrar(raiz);

    return 0;
}

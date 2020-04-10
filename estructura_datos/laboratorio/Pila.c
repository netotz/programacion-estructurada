    #include <stdio.h>
    #include <stdlib.h>
     
    typedef struct pila
    {
    int clave;
    struct pila *psig;
    }pila;
     
    pila *pmaestro;
    /*Declaración de funciones*/
    pila *NuevoElem();
    void push(int dato);
    int pop(void);
    void imprimir(pila *);
    /*Fin de las declaraciones*/
     
     
    /*******************************FUNCION MAIN*****************************/
     
    main()
    {
      char m;
      int k;
      puts("Anadir un elemento [A], borrar el ultimo elemento [B], listar todo [L] o salir [S]: ");
      while(1){
      printf("[A], [B], [L] o [S]: ");
      m=getchar();
      getchar();
     
      switch(m){
      case 'A': printf("Introduzca un número: "); scanf("%d", &k); getchar(); push(k); break;
      case 'B': pop(); break;
      case 'L': imprimir(pmaestro); break;
      case 'S': exit(0);
      default: puts("\nSaliendo del programa...");
      
      return 0;
      }
    }
    }
     
    /**************************************************************************/
     
    void push(int dato) /*Añade un nuevo elemento a la pila*/
    { pila *q = NuevoElem();
    q->psig = pmaestro;
    q->clave = dato;
    pmaestro = q;
    }
     
    int pop(void) /*Esta función "desecha" el último elemento introducido*/
    { pila *q; int x;
      if (pmaestro==NULL) { puts("Lista vac¡a"); return EOF; }
      else{
      x = pmaestro->clave;
      q = pmaestro;
      pmaestro = pmaestro->psig;
      free(q);
     
      return x;
    }}
     
    pila *NuevoElem() /*Crea un nuevo elemento. Atento: retorna un puntero*/
    { pila *q = (pila *)malloc(sizeof(pila));
      if (q==NULL) { printf("Falta memoria"); exit(0);}
      return q;
    }
     
    void imprimir(pila *pmaestro) /*Imprime todos los datos albergados en la pila hasta el momento*/
    {
     printf("Las claves introducidas son: ");
     while(pmaestro!=NULL)
     {
     printf("%d ", pmaestro->clave);
     pmaestro = pmaestro->psig;
     }
     printf("\n");
     
    }

#ifndef abb_h
#define abb_h

struct NODO {
  struct NODO *izq;
  struct NODO *der;
  int value;
};

typedef struct NODO* Abb;

//Funciones de Implementacion
Abb nuevo_arbol();
Abb crea_nodo_abb(int);
void inserta_abb(Abb *, int);
Abb inserta_arreglo_abb(int *, int);
void libera_abb(Abb *);

// Funciones de impresion
void imprime_orden_abb(Abb);

//Funcion de busqueda
int busca_elemento_abb(Abb, int);

#endif
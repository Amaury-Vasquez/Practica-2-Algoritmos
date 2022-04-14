#include <stdio.h>
#include <stdlib.h>

#include "abb.h"

Abb nuevo_arbol() { return NULL; }

Abb crea_nodo_abb(int value) {
  Abb nodo = (Abb) malloc(sizeof(struct NODO));
  nodo->der = nuevo_arbol();
  nodo->izq = nuevo_arbol();
  nodo->value = value;
  return nodo;
}

void inserta_abb(Abb *arbol, int value) {
  Abb nodo = crea_nodo_abb(value);
  if(*arbol == nuevo_arbol())
    *arbol = nodo;
  else {
    Abb p = *arbol, q = *arbol;
    while(p != NULL) {
      q = p;
      if(value < p->value)
        p = p->izq;
      else
        p = p->der;
    }
    if(value < q->value)
      q->izq = nodo;
    else
      q->der = nodo;
  }
}

void libera_abb(Abb *arbol) {
  if(*arbol != NULL) {
    libera_abb(&(*arbol)->izq);
    libera_abb(&(*arbol)->der);
    free(*arbol);
  }
}

void imprime_orden_abb(Abb arbol) {
  if(arbol != NULL) {
    imprime_orden_abb(arbol->izq);
    printf("%d ", arbol->value);
    imprime_orden_abb(arbol->der);
  }
}

int busca_elemento_abb(Abb arbol, int value) {
  Abb p = arbol;
  while(p != NULL) {
    if(p->value == value)
      return value;
    else if(value < p->value)
      p = p->izq;
    else
      p = p->der;
  }
  return -1;
}

Abb inserta_arreglo_abb(int *arr, int n) {
  Abb arbol = nuevo_arbol();
  int i;
  for(i = 0; i < n; i++)
    inserta_abb(&arbol, arr[i]);
  return arbol;
}
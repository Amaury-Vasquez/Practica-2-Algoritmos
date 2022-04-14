#include <stdio.h>
#include <stdlib.h>

#include "leer_numeros.h"

int *generar_arreglo(int n) {
  int *arr = (int *) malloc(sizeof(int) * n);
  return arr;
}

void leer_numeros(int *arr, int n) {
  int i, valor;
  for(i = 0; i < n; i++) {
    scanf("%d", &valor);
    arr[i] = valor;
  }
}

void liberar_arreglo(int *arr) {
  free(arr);
}

void imprime_arreglo(int *arr, int n) {
  int i;
  for(i = 0; i < n; i++) 
    printf("%d ", arr[i]);
  printf("\n");
}
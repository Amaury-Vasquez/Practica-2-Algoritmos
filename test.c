#include <stdio.h>
#include <stdlib.h>

#include "leer_numeros/leer_numeros.h"
#include "busqueda_exponencial/busqueda_exponencial.h"

int main() {
  int *arr = (int *) malloc(sizeof(int) * 20), i;

  for(i = 0; i < 20; i++)
    arr[i] = (i + 1) * (i + 1);
  imprime_arreglo(arr, 20);
  printf("%d\n", busqueda_exponencial(arr, 25, 20));
  liberar_arreglo(arr);  
  return 0; 
}
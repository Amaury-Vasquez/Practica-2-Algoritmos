#include "busqueda_exponencial.h"

int busqueda_exponencial(int *arr, int n, int len) {
  if(arr[0] == n)
    return 0;
  int i = 1;
  // Encuentra el rango
  while(i < len && arr[i] <= n)
    i *= 2;
  // Busqueda binaria
  int aux, der, izq, m;
  izq = i / 2;
  der = min(len - 1, i);
  while(izq <= der) {
    m = (der + izq) / 2;
    aux = arr[m];
    if(aux == n)
      return m;
    else if(n < aux)
      der = m - 1;
    else 
      izq = m + 1;
  }
  return -1;
}

int min(int a, int b) {
  return (a < b)? a : b;
}
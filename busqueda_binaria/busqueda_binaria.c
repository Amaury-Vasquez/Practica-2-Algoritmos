#include "busqueda_binaria.h"

int busqueda_binaria(int *arr, int n, int len) {
  int aux, der, izq, m;
  izq = 0;
  der = len - 1;

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

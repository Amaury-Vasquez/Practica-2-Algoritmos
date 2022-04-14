int minimo(int x, int y) {
  return (x <= y) ? x : y;
}

/**
  */
int busqueda_fibonacci(int arreglo[], int x, int n) {
  int fibo2 = 0;
  int fibo1 = 1;
  int fiboM = fibo2 + fibo1;

  while(fiboM < n) {
      fibo2 = fibo1;
      fibo1 = fiboM;
      fiboM = fibo2 + fibo1;
  }

  int offset = -1;

  while(fiboM > 1) {
    int i = minimo(offset + fibo2, n - 1);
      if(arreglo[i] < x) {
        fiboM = fibo1;
        fibo1 = fibo2;
        fibo2 = fiboM - fibo1;
        offset = i;
      } else if(arreglo[i] > x) {
          fiboM = fibo2;
          fibo1 = fibo1 - fibo2;
          fibo2 = fiboM - fibo1;
      } else
          return i;
    }

    if(fibo1 && arreglo[offset + 1] == x)
        return offset + 1;

    return -1;
}

int busqueda_lineal(int *arr, int n, int len) {
  int i;
  for(i = 0; i < len; i++) {
    if(arr[i] == n)
      return i;
  }
  return -1;
}
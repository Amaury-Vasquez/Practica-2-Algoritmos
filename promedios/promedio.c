#include <stdio.h>
#include <stdlib.h>

double promedio(double [], int);

int main(int argc, char *argv[]) {
  if(argc != 3)
    return 1;
  int i, n = atoi(argv[1]), size = atoi(argv[2]);
  double arr[size];
  for(i = 0; i < size; i++)
    scanf("%lf", &arr[i]);
  printf("promedio: %d\n%lf\n\n", n, promedio(arr, size));
  return 0;
}

double promedio(double arr[], int size) {
  int i;
  double prom;
  for(i = 0, prom = 0; i < size; i++)
    prom += arr[i];
  return prom / size;
}
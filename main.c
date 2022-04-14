#include <stdio.h>
#include <stdlib.h>

#include "tiempo/tiempo.h"
#include "leer_numeros/leer_numeros.h"
#include "busqueda_abb/abb.h"

int main(int argc, char *argv[]) {
  // Verifica que solo se haya pasado un argumento
  if(argc != 3) {
    printf("Numero incorrecto de argumentos");
    return 1;
  }
  // Declaracion/Inicializacion de variables
  double utime0, stime0, wtime0,utime1, stime1, wtime1;
  int *arr, size = atoi(argv[1]), n = atoi(argv[2]);
  arr = generar_arreglo(size);
  // Entrada de datos en el arreglo
  leer_numeros(arr, size);
  Abb arbol = inserta_arreglo_abb(arr, size);
  // Inicia conteo del tiempo
  uswtime(&utime0, &stime0, &wtime0);
  // Ejecucion algoritmo
  int i = busca_elemento_abb(arbol, n);
  // Termina conteo del tiempo
  uswtime(&utime1, &stime1, &wtime1);

  //Cálculo del tiempo de ejecución del programa
	printf("%.10f\n",  wtime1 - wtime0);
	//Mostrar los tiempos en formato exponecial
  
  // Liberacion memoria
  libera_abb(&arbol);
  liberar_arreglo(arr);
  return 0;
}
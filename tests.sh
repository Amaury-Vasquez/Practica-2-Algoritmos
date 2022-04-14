#!/bin/bash
# compilacion del programa principal
gcc main.c leer_numeros/leer_numeros.c tiempo/tiempo.c busqueda_abb/abb.c -o main
# declaracion de arreglos
declare -a numbers=(322486 14700764 3128036 6337399 61396 10393545 2147445644 1295390003 450057883 187645041 1980098116
152503 5000 1493283650 214826 1843349527 1360839354 2109248666
2147470852 0)
declare -a sizes=(1000000 2000000 3000000 4000000 5000000 6000000 7000000 8000000 9000000
10000000)
# ejecucion del programa
for((i = 0; i < ${#sizes[@]}; i++))
do
  for((j = 0; j < ${#numbers[@]}; j++))
  do
    ./main ${sizes[i]} ${numbers[j]} <10millonesAleatorios.txt >> ./datos_tiempo/busqueda_abb/tiempos/${sizes[i]}.txt
  done
done


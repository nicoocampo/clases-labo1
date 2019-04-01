#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#include "funciones.h"
int main(){

    int numeros[MAX], valor;
    cargarDatos(numeros, MAX);
    mostrarDatos(numeros, MAX);
    printf("\n\n\nEl valor maximo ingresado es: %d", buscarMaximo(numeros,MAX));
    printf("\n\nEl valor minimo ingresado es: %d\n\n", buscarMinimo(numeros,MAX));
    printf("\nIngrese un valor a buscar en el array: ");
    scanf("%d", &valor);
    if(buscarValor(numeros, MAX, valor)!=-1)
    printf("\n\nEl valor %d se encuentra en la posicion %d del vector\n\n", valor, (buscarValor(numeros, MAX, valor))+1);
    else
    printf("\n\nNo se encontro el valor solicitado\n\n");
    return 0;
}

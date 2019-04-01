#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#include "funciones.h"
int main(){
    int numeros[MAX];
    cargarDatos(numeros, MAX);
    mostrarDatos(numeros, MAX);
    printf("\n\nEl valor maximo ingresado es: %d", buscarMaximo(numeros,MAX));
    printf("\n\nEl valor minimo ingresado es: %d", buscarMinimo(numeros,MAX));
    return 0;
}

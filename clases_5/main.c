#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#include "funciones.h"
int main(){
    int numeros[MAX];
    cargarDatos(numeros, MAX);
    mostrarDatos(numeros, MAX);
    return 0;
}

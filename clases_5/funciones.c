#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void cargarDatos(int numeros[], int cantidadDeValores){
    int i;
    for(i=0;i<cantidadDeValores; i++){
        printf("\nIngrese el valor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
}
void mostrarDatos(int numeros[], int cantidadDeValores){
    int i;
    for(i=0;i<cantidadDeValores; i++){
        printf("\n\nEl valor del espacio %d es: %d", i+1, numeros[i]);
    }
}

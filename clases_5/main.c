#include <stdio.h>
#include <stdlib.h>
#define MAX 3

void cargarDatos(int numeros[], int cantidadDeValores);
void mostrarDatos(int [], int);
int main()
{
    int numeros[MAX];
    cargarDatos(numeros, MAX);
    mostrarDatos(numeros, MAX);
    return 0;
}
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

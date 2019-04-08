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
int buscarMaximo(int numeros[], int cantidadDeValores){
    int i, max=numeros[0];
    for(i=0;i<cantidadDeValores; i++){
        if(max<numeros[i])
            max=numeros[i];
    }
    return max;
}
int buscarMinimo(int numeros[], int cantidadDeValores){
    int i, min=numeros[0];
    for(i=0;i<cantidadDeValores; i++){
        if(min>numeros[i])
            min=numeros[i];
    }
    return min;
}
int buscarValor(int numeros[], int cantidadDeValores, int valor){
    int i;
    for(i=0;i<cantidadDeValores; i++){
        if(numeros[i]==valor)
            return i;
    }
    return -1;
}

void ordenarVector(int numeros[],int len){
    int i, j;
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(numeros[i]>numeros[j])
                swapBubble(numeros,i,j);
        }
    }
}

void swapBubble(int numeros[], int i, int j){
    int aux=numeros[i];
    numeros[i]=numeros[j];
    numeros[j]=aux;
}

int menu(){
    int opcion;
    system("cls");
    do{
        printf("1 - Ingresar valores array");
        printf("\n2 - Mostrar valores del array");
        printf("\n3 - Buscar valor en el array");
        printf("\n4 - Ordenar array");
        printf("\n\n5 - Salir");
        printf("\n\nOpcion: ");
        scanf("%d", &opcion);
    }while (opcion<0 || opcion>5);
    return opcion;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#include "funciones.h"
int main(){
    int numeros[MAX], valor;
    char seguir;
    do{
        switch(menu()){
            case 1:
                cargarDatos(numeros, MAX);
                printf("\n\nCARGA EXITOSA\n\n");
                system("pause");
                break;
            case 2:
                mostrarDatos(numeros, MAX);
                printf("\n\n\nEl valor maximo ingresado es: %d", buscarMaximo(numeros,MAX));
                printf("\n\nEl valor minimo ingresado es: %d\n\n", buscarMinimo(numeros,MAX));
                system("pause");
                break;
            case 3:
                printf("\nIngrese un valor a buscar en el array: ");
                scanf("%d", &valor);
                if(buscarValor(numeros, MAX, valor)!=-1)
                    printf("\n\nEl valor %d se encuentra en la posicion %d del vector\n\n", valor, (buscarValor(numeros, MAX, valor))+1);
                else
                    printf("\n\nNo se encontro el valor solicitado\n\n");
                system("pause");
                break;
            case 4:
                ordenarVector(numeros, MAX);
                printf("\n\nARRAY ORDENADO\n\n");
                system("pause");
                break;
            case 5:
                seguir='n';
                break;
        }

    }while (seguir!='n');
    return 0;
}

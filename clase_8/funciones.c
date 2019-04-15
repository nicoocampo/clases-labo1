#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "funciones.h"
#define MAX 20

void mostrarEstructura(eEmpleado aux[], int tam){
    system("cls");
    int i;
    for(i=0;i<tam;i++){
        if(aux[i].legajo>-1){
            printf("Legajo: %d", aux[i].legajo);
            printf("\nNombre: %s", aux[i].nombre);
            printf("\nsexo: %c", aux[i].sexo);
            printf("\nSueldo neto: %.2f", aux[i].sueldoBruto);
            printf("\nSueldo bruto: %.2f\n\n", aux[i].sueldoNeto);
        }
    }
}

void cargarEstructura(eEmpleado lista[], int tam){
    system("cls");
    int aux=buscarLibre(lista, tam);
    if(aux>-1){
        lista[aux].legajo=pedirEntero("legajo");
        pedirCadena("nombre",lista[aux].nombre,30);
        lista[aux].sexo=pedirCaracter("sexo");
        lista[aux].sueldoBruto=pedirFlotante("sueldo");
        lista[aux].sueldoNeto=lista[aux].sueldoBruto*0.85;
        printf("\n\nCarga confirmada con exito!\n");
    }
    else{
        printf("\nNo se encontro espacio libre\n");
    }
}

int buscarLibre(eEmpleado lista[], int tam){
    int i, retorno=-1;
    for(i=0;i<tam;i++){
        if(lista[i].legajo==-1){
            retorno=i;
            break;
        }
    }
    return retorno;
}

void menu(){
    eEmpleado lista[TAM];
    inicializarEstructura(lista,TAM);
    int opcion;
        do{
            system("cls");
            printf("1 - Alta de empleados");
            printf("\n2 - Mostrar empleado");
            printf("\n3 - Baja de empleado");
            printf("\n\n4 - Salir");
            printf("\n\nOpcion: ");
            scanf("%d", &opcion);
            switch(opcion){
                case 1:
                    cargarEstructura(lista,TAM);
                    system("pause");
                    break;
                case 2:
                    mostrarEstructura(lista, TAM);
                    system("pause");
                    break;
                case 3:
                    bajaEmpleado(lista,TAM);
                    system("pause");
                    break;
                default:
                    printf("Ingresa bien el valor, maquinola\n");
                    break;
            }
        }while (opcion!=4);
}

void inicializarEstructura(eEmpleado lista[],int tam){
    int i;
    for(i=0;i<tam;i++){
        lista[i].legajo=-1;
    }
}

void bajaEmpleado(eEmpleado lista[], int tam){
    system("cls");
    int legajo, aux;
    printf("Ingrese el legajo del empleado a dar de baja: ");
    scanf("%d", &legajo);
    aux=buscarPosicion(lista, TAM, legajo);
    if(aux==-1)
        printf("\nNo se encontro el legajo solicitado\n");
    else{
        lista[aux].legajo=-1;
        printf("\nBaja confirmada con exito!\n");
    }
}
int buscarPosicion(eEmpleado lista[], int tam, int posicion){
    int retorno=-1, i;
    for(i=0;i<tam;i++){
        if(lista[i].legajo==posicion){
            retorno=i;
            break;
        }
    }
    return retorno;
}



int pedirEntero(char mensaje[]){
    int entero;
    printf("Ingrese %s: ", mensaje);
    scanf("%d", &entero);
    return entero;
}

float pedirFlotante(char mensaje[]){
    float flotante;
    printf("Ingrese %s: ", mensaje);
    scanf("%f", &flotante);
    return flotante;
}

char pedirCaracter(char mensaje[]){
    char caracter;
    printf("Ingrese %s: ", mensaje);
    scanf("%c", &caracter);
    return caracter;
}

void pedirCadena(char mensaje[],char cadena[],int len){
    char auxCadena[100];
    fflush(stdin);
    printf("Ingrese %s: ", mensaje);
    gets(auxCadena);
    validarCadena(mensaje, auxCadena, len);
    strcpy(cadena, auxCadena);
}

void validarCadena(char mensaje[], char cadena[], int len){
    while(strlen(cadena)>len){
        printf("ERROR: Reingrese %s", mensaje);
        gets(cadena);
    }
}

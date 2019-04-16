#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "funciones.h"
#include "empleados.h"
#define MAX 20

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
    fflush(stdin);
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

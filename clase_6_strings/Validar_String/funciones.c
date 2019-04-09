#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

void pedirCadena(char mensaje[],char cadena[],int len){
    char auxCadena[100];
    printf("Ingrese %s", mensaje);
    gets(auxCadena);
    validarCadena(mensaje, cadena, len);
    strcpy(cadena, auxCadena);
}

void validarCadena(char mensaje[], char cadena[], int len){
    while(strlen(cadena)>len){
        printf("ERROR: Reingrese %s", mensaje);
        gets(cadena);
    }
}

void concatenarCadenas(char primerCadena[], char segundaCadena[], char cadenaConcatenada[]){
    int i=0;
    strcpy(cadenaConcatenada, primerCadena);
    strcat(cadenaConcatenada, ", ");
    strcat(cadenaConcatenada, segundaCadena);
    strlwr(cadenaConcatenada);
    cadenaConcatenada[0]=toupper(cadenaConcatenada[0]);
    while(cadenaConcatenada[i]!='\0'){
        if(cadenaConcatenada[i]==' ')
            cadenaConcatenada[i+1]=toupper(cadenaConcatenada[i+1]);
        i++;
    }
}


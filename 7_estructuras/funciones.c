#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "funciones.h"
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
    char caracter;
    printf("Ingrese %s: ", mensaje);
    scanf("%c", &caracter);
    return caracter;
}

void pedirCadena(char mensaje[],char cadena[],int len){
    char auxCadena[100];
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

void burbujeoInt(int enteros[],int len){
    int i, j;
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(enteros[i]>enteros[j])
                swapBubbleInt(enteros,i,j);
        }
    }
}
void burbujeoChar(char caracteres[],int len){
    char i, j;
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(caracteres[i]>caracteres[j])
                swapBubbleChar(caracteres,i,j);
        }
    }
}

void burbujeoFloat(float flotante[],int len){
    int i, j;
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(flotante[i]>flotante[j])
                swapBubbleFloat(flotante,i,j);
        }
    }
}

void burbujeoString(char cadena[][20],int len){
    int i, j;
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(strcmp(cadena[i],cadena[j])>1){
                swapBubbleString(cadena, i, j);
            }
        }
    }
}

void swapBubbleInt(int enteros[], int i, int j){
    int aux=enteros[i];
    enteros[i]=enteros[j];
    enteros[j]=aux;
}

void swapBubbleChar(char caracteres[], int i, int j){
    char aux=caracteres[i];
    caracteres[i]=caracteres[j];
    caracteres[j]=aux;
}

void swapBubbleFloat(float flotantes[], int i, int j){
    float aux=flotantes[i];
    flotantes[i]=flotantes[j];
    flotantes[j]=aux;
}

void swapBubbleString(char cadena[], int i, int j){
    char auxCadena[100];
    strcpy(auxCadena,cadena[i]);
    strcpy(cadena[i],cadena[j]);
    strcpy(cadena[j],auxCadena);
}


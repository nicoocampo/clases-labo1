#include "mySorts.h"

void burbujeoInt(int enteros[],int len){
    int i, j;
    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(enteros[i]>enteros[j])
                swapBubbleInt(enteros,i,j);
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

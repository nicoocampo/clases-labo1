#include <stdio.h>
#include <stdlib.h>
#include "myGets.h"

int main()
{
    char caracter;
    pedirCaracter(&caracter,"caracter");
    printf("\nCaracter ingresado: %c", caracter);
    return 0;
}

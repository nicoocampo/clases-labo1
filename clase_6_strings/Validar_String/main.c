#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 20

int main()
{
    char nombre[MAX], apellido[MAX], apellidoNombre[MAX*2];
    pedirCadena("Nombre: ", nombre, MAX);
    pedirCadena("Apellido: ", apellido, MAX);
    concatenarCadenas(apellido, nombre, apellidoNombre);
    printf("Apellido, Nombre: %s", apellidoNombre);
    return 0;
}

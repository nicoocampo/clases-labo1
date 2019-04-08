#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[100], otraPalabra[100];
    /*printf("Ingrese palabra: ");
    scanf("%s", palabra);//Escribe hasta encontrar un espacio, lo interpreta como un \0
    printf("\n\n%s\n", palabra);
    printf("\nIngrese palabra: ");
    scanf("%[^\n]", palabra);//Con esa mascara, contemplamos el espacio
    printf("\n\n%s\n", palabra);
    printf("\nIngrese palabra: ");
    fflush(stdin);
    fgets(palabra,1024,stdin);//Lo mismo que el gets, pero funciona en linux :v
    printf("\n\n%s\n", palabra);*/
    printf("\nIngrese nombre y apellido: ");
    gets(palabra);//Escribe incluso los espacios.
    //strlen: devuelve en enteros la cantidad de caracteres de la cadena
    printf("\n\nLa palabra es: %s\nCantidad de caracteres: %d", palabra, strlen(palabra));
    strcpy(otraPalabra, "Holaaa");//strcpy: Copia una palabra constante en una cadena de caracteres
    printf("\n\nLa palabra es: %s\nCantidad de caracteres: %d", otraPalabra, strlen(otraPalabra));
    strncpy(palabra, otraPalabra, (strlen(otraPalabra))-1);//strncpy: Copia una cadena a otra de forma segura
    printf("\n\nLa palabra es: %s\nCantidad de caracteres: %d", palabra, strlen(palabra));
    return 0;
}

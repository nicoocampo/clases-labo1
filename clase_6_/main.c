#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[1024];
    printf("Ingrese palabra: ");
    scanf("%s", palabra);//Escribe hasta encontrar un espacio, lo interpreta como un \0
    printf("\n\n%s\n", palabra);
    printf("\nIngrese nombre y apellido: ");
    fflush(stdin);
    gets(palabra);//Escribe incluso los espacios
    printf("\n\n%s\n", palabra);
    printf("\nIngrese palabra: ");
    fflush(stdin);
    scanf("%[^\n]", palabra);//Con esa mascara, contemplamos el espacio
    printf("\n\n%s\n", palabra);
    printf("\nIngrese palabra: ");
    fflush(stdin);
    fgets(palabra,1024,stdin);//Lo mismo que el gets, pero funciona en linux :v
    printf("\n\n%s\n", palabra);
    return 0;
}

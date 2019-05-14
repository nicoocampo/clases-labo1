#include <stdio.h>
#include <stdlib.h>

int main(){
   /**
    int *x=NULL;//PUNTERO APUNTANDO A NADA, DE ESTA MANERA SE INICIALIZAN LOS PUNTEROS CORRECTAMENTE
    int v=10;
    x=&v;//LE PASAMOS LA POSICION DE MEMORIA A LA CUAL TIENE QUE APUNTAR EL PUNTERO
    printf("Valor de v: %d\n",*x);//MOSTRAMOS EL VALOR DE LA VARIABLE v DESDE EL PUNTERO x
    printf("Posicion de memoria de v: %p\n\n",x);//MOSTRAMOS LA DIRECCION DE MEMORIA QUE GUARDO EL PUNTERO
    return 0;*/

    /**char* pLetra=NULL;
    char letra;
    pLetra=&letra;
    printf("Ingrese una letra: ");
    scanf("%c",pLetra);
    printf("Valor de la variable letra: %c\n",*pLetra);
    return 0;*/
    int p;
    int* q;
    int* r;
    p=10;
    q=&p;
    r=q;
    printf("p= %d\nq= %d\nr= %d", p,*q,*r);
    return 0;
}

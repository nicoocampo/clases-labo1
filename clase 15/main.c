#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x=NULL;
    int v=10;
    x=&v;
    printf("Valor de v: %d\n",*x);
    printf("Posicion de memoria de v: %p\n\n",x);
    return 0;
}

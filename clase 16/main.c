#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int numero;
    char letra;
}eDato;
int mostrarEstructura(eDato *pDato, int len);
int ordenarEstructuraPorLetra(eDato* pDato, int len);

int main(){
    eDato arrayDato[3]={{1,'b'},{1,'r'},{2,'d'}};
    eDato *pDato;
    pDato=arrayDato;
    mostrarEstructura(pDato,3);
    ordenarEstructuraPorLetra(pDato, 3);
    mostrarEstructura(pDato,3);
    return 0;
}

int mostrarEstructura(eDato *pDato, int len){
    int i, retorno=-1;
    if(pDato!=NULL && len>0){
        for(i=0;i<len;i++)
            printf("Numero: %d\nLetra: %c\n\n", (*(pDato+i)).numero, (*(pDato+i)).letra);
        retorno=1;
    }
    return retorno;
}

int ordenarEstructuraPorLetra(eDato* pDato, int len){
    int i, j, retorno=-1;
    eDato aux;
    if(pDato!=NULL && len>0){
        retorno=1;
        for(i=0;i<len-1;i++){
            for(j=i+1;j<len;j++){
                if((*(pDato+i)).letra>(*(pDato+j)).letra){
                    aux=*(pDato+i);
                    *(pDato+i)=*(pDato+j);
                    *(pDato+j)=aux;
                }
            }
        }
    }
    return retorno;
}

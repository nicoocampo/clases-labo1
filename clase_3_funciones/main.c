#include <stdio.h>
#include <stdlib.h>
void sumarCasoUno(int,int);
int sumarNumerosCasoDos(void);
int sumarNumerosCasoTres(int, int);
void sumarCasoCuatro(void);
//void aritmetica(int elegirOperacion, float unNumero, float otroNumero, char mensaje[], char mensajeError);
int main(){
    int opcion, unNumero, otroNumero;
    printf("Caso 1: Recibe y no devuelve\nCaso 2: No recibe y devuelve\nCaso 3: Recibe y devuelve\ncaso 4: No recibe y no devuelve\n\nIngrese el caso: ");
    scanf("%d", &opcion);
    switch(opcion)
    {
        case 1:
            printf("\n\nIngrese un numero!\n");
            scanf("%d", &unNumero);
            printf("\nIngrese otro numero!\n");
            scanf("%d", &otroNumero);
            sumarCasoUno(unNumero, otroNumero);
            return 0;
        case 2:
            return printf("\n\nLa suma es: %d", sumarNumerosCasoDos());
        case 3:
            printf("\n\nIngrese un numero!\n");
            scanf("%d", &unNumero);
            printf("\nIngrese otro numero!\n");
            scanf("%d", &otroNumero);
            return printf("\n\nLa suma entre %d y %d es: %d", unNumero, otroNumero, unNumero+otroNumero);;
        case 4:
            sumarCasoCuatro();
            return 0;
    default:
        printf("\nSos un pelotudo maestro");
        break;
    }
   return 0;
}
void sumarCasoUno(int unNumero,int otroNumero){
    printf("La suma entre %d y %d es: %d", unNumero, otroNumero, unNumero+otroNumero);
    return;
}
int sumarNumerosCasoDos(void){
    int unNumero, otroNumero;
    printf("Ingrese un numero!\n");
    scanf("%d", &unNumero);
    printf("\nIngrese otro numero!\n");
    scanf("%d", &otroNumero);
    return unNumero+otroNumero;
}
int sumarNumerosCasoTres(int unNumero,int otroNumero){
    return unNumero+otroNumero;
}
void sumarCasoCuatro(void){
    int unNumero, otroNumero;
    printf("Ingrese un numero!\n");
    scanf("%d", &unNumero);
    printf("\nIngrese otro numero!\n");
    scanf("%d", &otroNumero);
    printf("La suma entre %d y %d es: %d", unNumero, otroNumero, unNumero+otroNumero);
    return;
}
/*void aritmetica(int elegirOperacion, float unNumero, float otroNumero, char mensaje[], char mensajeError){
    switch(elegirOperacion){
        case 1:
            return unNumero+otroNumero;
        case 2:
            return unNumero-otroNumero;
        case 3:
            return unNumero*otroNumero;
        default:
            break;
    }
    return unNumero/otroNumero;
}
*/

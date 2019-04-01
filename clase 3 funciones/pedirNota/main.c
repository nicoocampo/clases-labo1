#include <stdio.h>
#include <stdlib.h>
int pedirNota(void);
float sacarPromedio(int, int);
int aprobarMateria(int, int);
void ejercicioUno(void);
int main(){
    ejercicioUno();
    return 0;
}
int pedirNota(void){
    int nota;
    do{
        printf("\nIngrese la nota del alumno: ");
        scanf("%d", &nota);
    }while(nota<0||nota>10);
    return nota;
}
float sacarPromedio(int suma, int cantidad){
    return (float)suma/(float)cantidad;
}
int aprobarMateria(int notaMinima, int notaMaxima){
    if(notaMinima<=notaMaxima)
        return 1;
    return 0;
}
void ejercicioUno(void){
    int i=0, nota=0, aprobados=0, desaprobados=0;
    float promedioNotasAprobados=0, promedioNotasDesaprobados=0;
    for(i=0; i<5; i++){
        nota=pedirNota();
        if((aprobarMateria(6,nota)==1)){
            aprobados++;
            promedioNotasAprobados=promedioNotasAprobados+nota;
        }
        else{
            desaprobados++;
            promedioNotasDesaprobados=promedioNotasDesaprobados+nota;
        }
    }
    printf("\nCantidad de aprobados: %d\nPromedio de notas de los aprobados: %.2f\nPromedio de notas de los desaprobados: %.2f\n", aprobados, sacarPromedio(promedioNotasAprobados,aprobados), sacarPromedio(promedioNotasDesaprobados,desaprobados));
    return;
}

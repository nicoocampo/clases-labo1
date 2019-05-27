#include "empleado.h"


eEmpleado* new_empleado(){
    eEmpleado* aux;
    aux=(eEmpleado*)malloc(sizeof(eEmpleado));
    return aux;
}

int set_legajo(eEmpleado* this,int legajo){
    int valido=0;
    if(this!=NULL){
        this->legajo=legajo;
        valido=1;
    }
    return valido;
}

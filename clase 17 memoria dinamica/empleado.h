#include <stdio.h>

typedef struct{
    int legajo;
    float sueldo;
    char nombre[30];
}eEmpleado;

eEmpleado* new_empleado();
int set_legajo(eEmpleado* this,int legajo);

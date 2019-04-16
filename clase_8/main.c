#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "empleados.h"
#define TAM 2
int main()
{
    eEmpleado lista[TAM];
    inicializarEstructura(lista,TAM);
    hardcodearDatosEmpleados(lista, TAM);
    int opcion;
    do{
        opcion=menu("1 - Alta de empleados\n2 - Baja de empleado\n3 - Modificacion de empleado\n4 - Mostrar empleado\n\n5 - Salir\n\nOpcion: ");
        switch(opcion){
            case 1:
                cargarEstructura(lista,TAM);
                system("pause");
                break;
            case 2:
                bajaEmpleado(lista,TAM);
                system("pause");
                break;
            case 3:
                modificarEmpleado(lista, TAM);
                system("pause");
                break;
            case 4:
                mostrarEstructura(lista, TAM);
                system("pause");
                break;
            case 5:
                break;
            default:
                printf("Ingresa bien el valor, maquinola\n");
                break;
        }
    }while(opcion!=5);
    return 0;
}

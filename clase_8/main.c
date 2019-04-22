#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "empleados.h"
#define TAM 6
//cantidad de carlos en la estructura
//La cantidad de personas que gana mas de 20k



int main()
{
    eEmpleado lista[TAM];
    inicializarEstructura(lista,TAM);
    hardcodearDatosEmpleados(lista, TAM);
    int opcion;
    do{
        opcion=menu("1 - Alta de empleados\n2 - Baja de empleado\n3 - Modificacion de empleado\n4 - Mostrar empleado\n5 - Informar\n\n6 - Salir\n\nOpcion: ");
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
                system("cls");
                printf("La cantidad de carlos en el sistema: %d\n\n", contarCarlos(lista,TAM,"Carlos"));
               // mostrarEmpleadoPorNombre(lista,TAM,"carlos");
                printf("Los que ganan suelos brutos mayores a 20000 son:\n");
                buscarMayor(lista,TAM,20000);
                system("pause");
                break;
            default:
                printf("Ingresa bien el valor, maquinola\n");
                break;
        }
    }while(opcion!=6);
    return 0;
}

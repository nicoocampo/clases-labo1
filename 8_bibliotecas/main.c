#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "empleados.h"
/*
1. Agregar la estructura sector, con idsector
2. En la estructura empleado, agregar un idsector
3. Hardcodear empleados con un sector
4. Modificar el alta para que el usuario seleccione un sector
5. Calcular el sueldo neto y bruto en funcion a las horas trabajadas y el valor por hora por sector

Nota: Tener en cuenta que si tenemos un abm de sectores, debe existir integridad referencial
entre los datos

Informar:

    a. Todos los empleados con la descripcion de su sector.
    b. Por cada sector, todos los empleados que en el trabajan.
    c. El total de sueldos por sector.
    d. El sector con mas empleados.
    si tenemos un abm de sectores, debe existir integridad referencial
entre los datos
*/



int main()
{
    eEmpleado lista[TAM];
    eSectores sectores[5];
    inicializarEstructura(lista,TAM);
    hardcodearDatosEmpleados(lista, sectores, 6, 3);
    int opcion;
    do{
        opcion=menu("1 - Alta de empleados\n2 - Baja de empleado\n3 - Modificacion de empleado\n4 - Mostrar empleado\n5 - Informar carlos\n6 - Informar\n\n7 - Salir\n\nOpcion: ");
        switch(opcion){
            case 1:
                cargarEstructura(lista,sectores,TAM, 3);
                system("pause");
                break;
            case 2:
                bajaEmpleado(lista,TAM);
                system("pause");
                break;
            case 3:
                modificarEmpleado(lista, sectores, TAM, 3);
                system("pause");
                break;
            case 4:
                mostrarEstructura(lista,sectores, 3, TAM);
                system("pause");
                break;
            case 5:
                system("cls");
                printf("La cantidad de carlos en el sistema: %d\n\n", contarCarlos(lista,TAM,"Carlos"));
               // mostrarEmpleadoPorNombre(lista,TAM,"carlos");
                printf("Los que ganan suelos brutos mayores a 20000 son:\n");
                buscarMayor(lista,sectores, TAM,3,20000);
                system("pause");
                break;
            case 6:
                system("cls");
                informarPorSector(lista,sectores,TAM,3);
                totalSueldoPorSector(lista,sectores,TAM,3);
                sectorMasEmpleados(lista,sectores,TAM,3);
                system("pause");
                break;
            default:
                printf("Ingresa bien el valor, maquinola\n");
                break;
        }
    }while(opcion!=7);
    return 0;
}

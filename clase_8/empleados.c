#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "funciones.h"
#include "empleados.h"

void mostrarEstructura(eEmpleado aux[], eSectores sector[], int ts, int tam){
    system("cls");
    int i;
    for(i=0;i<tam;i++){
        if(aux[i].estado!=0){
            mostrarEmpleado(aux,sector, tam,i,ts);
        }
    }
}

void cargarEstructura(eEmpleado lista[],eSectores sectores[], int tam, int ts){
    system("cls");
    int aux=buscarLibre(lista, tam);
    if(aux>-1){
        lista[aux].legajo=pedirEntero("legajo");
        pedirCadena("nombre",lista[aux].nombre,30);
        lista[aux].sexo=pedirCaracter("sexo");
        lista[aux].sueldoBruto=valorHoras(lista,sectores,tam,ts,aux);
        lista[aux].sueldoNeto=lista[aux].sueldoBruto*0.85;
        lista[aux].estado=1;
        lista[aux].idSector=cargarSectores(sectores,ts);
        printf("\n\nCarga confirmada con exito!\n");
    }
    else{
        printf("\nNo se encontro espacio libre\n");
    }
}

int buscarLibre(eEmpleado lista[], int tam){
    int i, retorno=-1;
    for(i=0;i<tam;i++){
        if(lista[i].estado==0){
            retorno=i;
            break;
        }
    }
    return retorno;
}

int menu(char mensaje[]){
    int opcion;
    system("cls");
    printf("%s", mensaje);
    scanf("%d", &opcion);
    return opcion;
}

void inicializarEstructura(eEmpleado lista[],int tam){
    int i;
    for(i=0;i<tam;i++){
        lista[i].estado=0;
    }
}

void bajaEmpleado(eEmpleado lista[], int tam){
    system("cls");
    int legajo, aux;
    printf("Ingrese el legajo del empleado a dar de baja: ");
    scanf("%d", &legajo);
    aux=buscarPosicion(lista, TAM, legajo);
    if(aux==-1)
        printf("\nNo se encontro el legajo solicitado\n");
    else{
        lista[aux].estado=0;
        printf("\nBaja confirmada con exito!\n");
    }
}
int buscarPosicion(eEmpleado lista[], int tam, int posicion){
    int retorno=-1, i;
    for(i=0;i<tam;i++){
        if(lista[i].legajo==posicion){
            retorno=i;
            break;
        }
    }
    return retorno;
}

/*void hardcodearDatosEmpleados(eEmpleado lista[], int tam){
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Maria","carlos","Jose","Carlos","Pablo","Mateo"};
    char sexo[]={'F','M','M','M','M','M'};
    float sueldoBruto[]={30000,2000,3000,60000,10000,60000};
    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo=sexo[i];
        lista[i].sueldoBruto=sueldoBruto[i];
        lista[i].sueldoNeto=sueldoBruto[i] * 0.85;
        lista[i].estado=1;
    }
}*/

void modificarEmpleado(eEmpleado lista[], eSectores sectores[], int tam, int ts){
    int aux, i;
    system("cls");
    buscarPosicion(lista, tam, aux=pedirEntero("el legajo del empleado a modificar: "));
    if(aux==-1)
    printf("\nNo se encontro el legajo solicitado\n");
    else{
        do{
            system("cls");
            i=menuModificacion(lista, sectores, tam, ts, aux);
            switch(i){
                case 1:
                    pedirCadena("\nnombre a modificar: ",lista[aux].nombre,32);
                    break;
                case 2:
                    lista[aux].sexo=pedirCaracter("\nsexo a modificar: ");
                    break;
                case 3:
                    lista[aux].sueldoBruto=pedirEntero("\nsueldo bruto a modificar: ");
                    lista[aux].sueldoNeto=lista[aux].sueldoBruto*0.85;
                    break;
            }
        }while(i!=4);
    }
}


int menuModificacion(eEmpleado lista[],eSectores sectores[], int tam, int ts, int aux){
    int opcion;
    mostrarEmpleado(lista,sectores,tam,ts,aux);
    printf("\n\n1 - Modificar Nombre\n2 - Modificar sexo\n3 - Modificar sueldo bruto\n4 - Salir\n\nOpcion: ");
    scanf("%d", &opcion);
    return opcion;
}
int contarCarlos(eEmpleado lista[], int tam, char cadena[]){
    int i, retorno=0;
    for(i=0;i<tam;i++){
        if(strcmpi(lista[i].nombre,cadena)==0 && lista[i].estado==1){
            retorno++;
        }
    }
    return retorno;
}

void mostrarEmpleadoPorNombre(eEmpleado lista[], eSectores sectores[], int tam, int ts, char cadena[]){
    int i;
    for(i=0;i<tam;i++){
        if(strcmpi(lista[i].nombre,cadena)==0){
            mostrarEmpleado(lista, sectores, tam, i, ts);
        }
    }
}

void buscarMayor(eEmpleado lista[], eSectores sectores[], int tam, int ts,int min){
    int i;
    for(i=0;i<tam;i++){
        if(lista[i].sueldoBruto>min && lista[i].estado==1){
            mostrarEmpleado(lista,sectores,tam,i,ts);
        }
    }
}

void mostrarEmpleado(eEmpleado lista[], eSectores sectores[], int tam, int id, int ts){
    printf("Legajo: %d", lista[id].legajo);
    printf("\nNombre: %s", lista[id].nombre);
    printf("\nsexo: %c", lista[id].sexo);
    printf("\nSueldo bruto: %.2f", lista[id].sueldoBruto);
    printf("\nSueldo neto: %.2f", lista[id].sueldoNeto);
    mostrarSectorPorId(sectores, lista[id].idSector, ts);
}

void hardcodearDatosEmpleados(eEmpleado lista[],eSectores sectores[], int tam, int ts){
    int i;
    int legajos[]={1,8,9,7,2,4};
    int valorHora[]={200,100,300};
    int idSector[]={1,1,3,2,3,3};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};
    char sexo[]={'M','F','M','M','M','M'};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sector[][50]={"Sistemas","Contabilidad","RRHH"};
    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = 1;
        lista[i].idSector=idSector[i];

    }
    for(i=0;i<ts;i++){
        sectores[i].idSector=i+1;
        strcpy(sectores[i].descripcion, sector[i]);
        sectores[i].valorHora=valorHora[i];
    }
}

int cargarSectores(eSectores sectores[], int ts){
    int entero, i;
    printf("Ingrese sector:");
    for(i=0;i<ts;i++)
        printf(" %d- %s", i+1, sectores[i].descripcion);
    printf(": ");
    scanf("%d", &entero);
    return entero;
}
void mostrarSectorPorId(eSectores sectores[],int id, int ts){
    int i;
    for(i=0;i<ts;i++){
        if(id==sectores[i].idSector){
            printf("\nSector: %s\n\n", sectores[i].descripcion);
        }
    }
}

float valorHoras(eEmpleado lista[], eSectores sectores[], int tam, int ts, int id){
    float retorno;
    printf("Ingrese la cantidad de horas trabajadas mensual: ");
    scanf("%i", &lista[id].horasTrabajadas);
    retorno=lista[id].horasTrabajadas*sectores[lista[id].idSector].valorHora;
    return retorno;
}

void informarPorSector(eEmpleado lista[], eSectores sectores[], int tam, int ts){
    int i,j;
    for(i=0;i<ts;i++){
        printf("Empleados del sector %s:\n", sectores[i].descripcion);
        for(j=0;j<tam;j++){
            if(lista[j].idSector==sectores[i].idSector && lista[i].estado==1)
                mostrarEmpleado(lista,sectores,tam,j,ts);
        }
    }
}

void totalSueldoPorSector(eEmpleado lista[], eSectores sectores[], int tam, int ts){
    int i,j;
    float sueldo;
    for(i=0;i<ts;i++){
        sueldo=0;
        printf("Total de sueldos del sector %s: ", sectores[i].descripcion);
        for(j=0;j<tam;j++){
            if(lista[j].idSector==sectores[i].idSector && lista[i].estado==1)
                sueldo=sueldo+lista[j].sueldoBruto;
        }
        printf("%.2f\n", sueldo);
    }
}

void sectorMasEmpleados(eEmpleado lista[], eSectores sectores[], int tam, int ts){
    int i,j;
    int aux1=0, aux2=0, aux3=0;
    for(i=0;i<ts;i++){
        aux1=0;
        for(j=0;j<tam;j++){
            if(lista[j].idSector==sectores[i].idSector && lista[i].estado==1)
                aux1++;
        }
        if(aux1>aux2)
            aux3=i;
    }
    printf("El sector con mas empleados(%d): %s: ",aux3+1,sectores[aux3].descripcion);
}

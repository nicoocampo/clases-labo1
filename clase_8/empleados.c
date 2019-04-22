#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define MAX 20
#define TAM 6
#include "funciones.h"
#include "empleados.h"


void mostrarEstructura(eEmpleado aux[], int tam){
    system("cls");
    int i;
    for(i=0;i<tam;i++){
        if(aux[i].legajo>-1){
            mostrarEmpleado(aux,tam,i);
        }
    }
}

void cargarEstructura(eEmpleado lista[], int tam){
    system("cls");
    int aux=buscarLibre(lista, tam);
    if(aux>-1){
        lista[aux].legajo=pedirEntero("legajo");
        pedirCadena("nombre",lista[aux].nombre,30);
        lista[aux].sexo=pedirCaracter("sexo");
        lista[aux].sueldoBruto=pedirFlotante("sueldo");
        lista[aux].sueldoNeto=lista[aux].sueldoBruto*0.85;
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

void modificarEmpleado(eEmpleado lista[], int tam){
    int aux, i;
    system("cls");
    buscarPosicion(lista, tam, aux=pedirEntero("el legajo del empleado a modificar: "));
    if(aux==-1)
    printf("\nNo se encontro el legajo solicitado\n");
    else{
        do{
            system("cls");
            i=menuModificacion(lista, tam, aux);
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


int menuModificacion(eEmpleado lista[], int tam, int aux){
    int opcion;
    mostrarEmpleado(lista,tam,aux);
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

void mostrarEmpleadoPorNombre(eEmpleado lista[], int tam, char cadena[]){
    int i;
    for(i=0;i<tam;i++){
        if(strcmpi(lista[i].nombre,cadena)==0){
            mostrarEmpleado(lista, tam, i);
        }
    }
}

void buscarMayor(eEmpleado lista[], int tam, int min){
    int i;
    for(i=0;i<tam;i++){
        if(lista[i].sueldoBruto>min && lista[i].estado==1){
            mostrarEmpleado(lista,tam,i);
        }
    }
}

void mostrarEmpleado(eEmpleado lista[], int tam, int id){
    printf("Legajo: %d", lista[id].legajo);
    printf("\nNombre: %s", lista[id].nombre);
    printf("\nsexo: %c", lista[id].sexo);
    printf("\nSueldo bruto: %.2f", lista[id].sueldoBruto);
    printf("\nSueldo neto: %.2f\n\n", lista[id].sueldoNeto);
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam){
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = 1;

    }
}

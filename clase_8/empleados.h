#define MAX 20
#define TAM 2

typedef struct{
    int estado;
    int legajo;
    char nombre[30];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;
void mostrarEstructura(eEmpleado aux[], int);
void cargarEstructura(eEmpleado aux[], int);
int menu(char[]);
void inicializarEstructura(eEmpleado lista[],int);
void bajaEmpleado(eEmpleado lista[], int);
int buscarPosicion(eEmpleado lista[], int, int);
int buscarLibre(eEmpleado lista[], int);
void modificarEmpleado(eEmpleado lista[], int tam);
int menuModificacion(eEmpleado lista[], int tam, int aux);
void hardcodearDatosEmpleados(eEmpleado lista[], int tam);

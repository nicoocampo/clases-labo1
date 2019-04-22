#define MAX 20
#define TAM 6
typedef struct{
    char sector[30];
    int id;
}eSector;

typedef struct{
    int estado;
    int legajo;
    char nombre[30];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    eSector sector;
}eEmpleado;
void mostrarEstructura(eEmpleado aux[], int);
void cargarEstructura(eEmpleado aux[], int);
int menu(char[]);
void inicializarEstructura(eEmpleado lista[],int);
void bajaEmpleado(eEmpleado lista[], int);
int buscarPosicion(eEmpleado lista[], int, int);
int buscarLibre(eEmpleado lista[], int);
void modificarEmpleado(eEmpleado lista[], int);
int menuModificacion(eEmpleado lista[], int, int);
void hardcodearDatosEmpleados(eEmpleado lista[], int);
int contarCarlos(eEmpleado lista[], int, char[]);
void buscarMayor(eEmpleado lista[], int tam, int min);
void mostrarEmpleado(eEmpleado lista[], int tam, int id);
void mostrarEmpleadoPorNombre(eEmpleado lista[], int tam, char cadena[]);

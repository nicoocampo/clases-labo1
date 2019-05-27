#define MAX 20
#define TAM 10
typedef struct{
    int idSector;
    int valorHora;
    char descripcion[30];

}eSectores;

typedef struct{
    int estado;
    int legajo;
    int idSector;
    int horasTrabajadas;
    char nombre[30];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;
void mostrarEstructura(eEmpleado aux[], eSectores sector[], int ts, int tam);
void cargarEstructura(eEmpleado lista[],eSectores sectores[], int tam, int ts);
int menu(char[]);
void inicializarEstructura(eEmpleado lista[],int);
void bajaEmpleado(eEmpleado lista[], int);
int buscarPosicion(eEmpleado lista[], int, int);
int buscarLibre(eEmpleado lista[], int);
void modificarEmpleado(eEmpleado lista[], eSectores sectores[], int tam, int ts);
int menuModificacion(eEmpleado lista[],eSectores sectores[], int tam, int ts, int aux);
void hardcodearDatosEmpleados(eEmpleado lista[],eSectores sectores[], int tam, int ts);
int contarCarlos(eEmpleado lista[], int, char[]);
int cargarSectores(eSectores sectores[], int ts);
void buscarMayor(eEmpleado lista[], eSectores sectores[], int tam, int ts,int min);
void mostrarEmpleado(eEmpleado lista[], eSectores sectores[], int tam, int id, int ts);
void mostrarEmpleadoPorNombre(eEmpleado lista[], eSectores sectores[], int tam, int ts, char cadena[]);
void mostrarSectorPorId(eSectores sectores[],int id, int ts);
float valorHoras(eEmpleado lista[], eSectores sectores[], int tam, int ts, int id);
float valorHoras(eEmpleado lista[], eSectores sectores[], int tam, int ts, int id);
void informarPorSector(eEmpleado lista[], eSectores sectores[], int tam, int ts);
void totalSueldoPorSector(eEmpleado lista[], eSectores sectores[], int tam, int ts);
void sectorMasEmpleados(eEmpleado lista[], eSectores sectores[], int tam, int ts);
void sectorMasEmpleados(eEmpleado lista[], eSectores sectores[], int tam, int ts);

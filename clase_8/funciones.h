#define MAX 20
#define TAM 2
typedef struct{
    int legajo;
    char nombre[30];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;
int pedirEntero(char mensaje[]);
float pedirFlotante(char mensaje[]);
char pedirCaracter(char mensaje[]);
void pedirCadena(char mensaje[],char cadena[],int len);
void validarCadena(char mensaje[], char cadena[], int len);
void mostrarEstructura(eEmpleado aux[], int tam);
void cargarEstructura(eEmpleado aux[], int tam);
void menu(void);
void inicializarEstructura(eEmpleado lista[],int tam);
void bajaEmpleado(eEmpleado lista[], int tam);
int buscarPosicion(eEmpleado lista[], int tam, int posicion);
int buscarLibre(eEmpleado lista[], int tam);

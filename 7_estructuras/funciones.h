#define MAX 20

int pedirEntero(char mensaje[]);
float pedirFlotante(char mensaje[]);
char pedirCaracter(char mensaje[]);
void pedirCadena(char mensaje[],char cadena[],int len);
void validarCadena(char mensaje[], char cadena[], int len);
void concatenarCadenas(char primerCadena[], char segundaCadena[], char cadenaConcatenada[]);
void burbujeoInt(int enteros[],int len);
void burbujeoFloat(float flotante[],int len);
void burbujeoChar(char caracteres[],int len);
void burbujeoString(char cadena[][MAX],int len);
void swapBubbleInt(int enteros[], int i, int j);
void swapBubbleFloat(float flotantes[], int i, int j);
void swapBubbleChar(char caracteres[], int i, int j);
void swapBubbleString(char cadena[], int i, int j);

#include "myGets.h"

/** \brief Pide que el usuario ingrese un entero y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el entero
 * \return El entero validado
 *
 */
int pedirEntero(char mensaje[]){
    int retorno, flag=1, i;
    char str[40];
    do{
        printf("%s: ", mensaje);
        gets(str);
        for(i=0;str[i]='\0';i++){
            if(str[i]<'0' || str[i]>'9'){
                flag=0;
                break;
            }
            flag=1;
            i++;
        }
    }while(flag=1);
    retorno=atoi(str);
    return retorno;
}

/** \brief Pide que el usuario ingrese un flotante y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el flotante
 * \return el flotante ya validado
 *
 */
float pedirFlotante(char mensaje[]){
    float retorno;
    int flag=1, i, cantidadPuntos=0;
    char str[100];
    do{
        printf("%s: ", mensaje);
        gets(str);
        for(i=0;str[i]='\0';i++){
            if (str[i]=='.'&&cantidadPuntos==0)
            {
                cantidadPuntos++;
                i++;
                continue;
            }
            if(str[i]<'0' || str[i]>'9'){
                flag=0;
                break;
            }
            flag=1;
            i++;
        }
    }while(flag=1);
    retorno=atof(str);
    return retorno;
}

/** \brief Pide que el usuario ingrese un caracter
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el caracter
 * \return El caracter solicitado
 *
 */
char pedirCaracter(char mensaje[]){
    fflush(stdin);
    char caracter;
    printf("Ingrese %s: ", mensaje);
    caracter=getc(stdin);
    return caracter;
}

/** \brief Pide que el usuario ingrese una cadena y la valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el cadena
 * \param cadena[]
 * \param len tamaño de la cadena
 *
 */
void pedirCadena(char mensaje[],char cadena[],int len){
    char auxCadena[100];
    fflush(stdin);
    printf("Ingrese %s: ", mensaje);
    gets(auxCadena);
    while(strlen(auxCadena)>len){
        printf("ERROR: Reingrese %s", mensaje);
        gets(cadena);
    }
    strcpy(cadena, auxCadena);
}

/** \brief Pide que el usuario que ingrese un caracter 'M' o 'F' y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el cadena
 * \return El caracter solicitado
 *
 */
char pedirSexo(char mensaje[]){
    fflush(stdin);
    char caracter;
    do{
    printf("Ingrese %s: ", mensaje);
    caracter=getc(stdin);
    tolower(caracter);
    }while(caracter!='m' || caracter!='f');
    return caracter;
}

void cadenaSoloLetras(char mensaje[], char cadena[], int len){
    char str[100];
    int i, flag=1;
    fflush(stdin);
    do{
        flag=1;
        printf("Ingrese %s: ", mensaje);
        gets(str);
        if(strlen(str)>len){
            printf("ERROR: LA CADENA NO SOPORTA DEMASIADOS CARACTERES\n");
            continue;
        }
        for(i=0;str[i]!='\0';i++){
            if((str[i]!=' ')&&(str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z')){
                flag=0;
                break;
            }
            i++;
        }
    }while(flag=0);
    strcpy(cadena, str);
}


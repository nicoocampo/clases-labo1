
#include "myGets.h"

/** \brief Pide que el usuario ingrese un entero y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el entero
 * \return 1 si esta todo piola, -1 si el puntero apunta a NULL
 *
 */
 int pedirEntero(int* pNumero, char mensaje[]){
    int retorno=-1, i;
    char str[40];
    if(pNumero!=NULL){
        do{
            retorno=1;
            printf("%s: ", mensaje);
            fflush(stdin);
            scanf("%s", str);
            for(i=0; i<40; i++){
                if(str[i]=='\0')
                    break;
                if(str[i]<'0' || str[i]>'9'){
                    retorno=-1;
                    break;
                }
            }
            *pNumero=atoi(str);
        }
        while(retorno==-1);
    }
    return retorno;
}
/** \brief Pide que el usuario ingrese un entero y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el entero
 * \return 1 si esta todo piola, -1 si el puntero apunta a NULL
 *
 */
int pedirEnteroMaxMin(int* pNumero, int max, int min, char mensaje[]){
    int retorno=-1, i;
    char str[40];
    if(pNumero!=NULL){
        do{
            retorno=1;
            printf("%s: ", mensaje);
            fflush(stdin);
            scanf("%s", str);
            for(i=0; i<40; i++){
                if(str[i]=='\0')
                    break;
                if(str[i]<'0' || str[i]>'9'){
                    retorno=-1;
                    break;
                }
            }
            *pNumero=atoi(str);
            if(*pNumero>max || *pNumero<min)
                retorno=-1;
        }
        while(retorno==-1);
    }
    return retorno;
}

/** \brief Pide que el usuario ingrese un flotante y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el flotante
 * \return el flotante ya validado
 *
 */
int pedirFlotante(float* pNumero, char mensaje[]){
    int retorno=-1;
    int i, cantidadPuntos;
    char str[100];
    if(pNumero!=NULL){
        do{
            retorno=1;
            cantidadPuntos=0;
            printf("%s: ", mensaje);
            fflush(stdin);
            gets(str);
            for(i=0; i<40; i++){
                if(str[i]=='\0')
                    break;
                if (str[i]=='.'){
                    cantidadPuntos++;
                    continue;
                }
                if(str[i]<'0' || str[i]>'9'){
                    retorno=0;
                    break;
                }
            }
        }
        while(retorno==0 || cantidadPuntos>1);
        *pNumero=atof(str);
    }
    return retorno;
}

/** \brief Pide que el usuario ingrese un caracter
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el caracter
 * \return El caracter solicitado
 *
 */
int pedirCaracter(char* pCaracter, char mensaje[]){
    int retorno=-1;
    char caracter;
    if(pCaracter!=NULL){
        do{
            retorno=1;
            fflush(stdin);
            printf("Ingrese %s: ", mensaje);
            caracter=getc(stdin);
            if((caracter!=' ')&&(caracter<'a'||caracter>'z')&&(caracter<'A'||caracter>'Z'))
                retorno=0;
        }while(retorno==0);
        *pCaracter=caracter;
    }
    return retorno;
}

/** \brief Pide que el usuario ingrese una cadena y la valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el cadena
 * \param cadena[]
 * \param len tamaño de la cadena
 *
 */
int pedirCadena(char* pCadena,int len, char mensaje[]){
    char auxCadena[100];
    int retorno=-!
    if(pCadena!=NULL && len>0){
        do{
            retorno=1;
            fflush(stdin);
            printf("Ingrese %s: ", mensaje);
            gets(auxCadena);
            if(strlen(auxCadena)>len){
                printf("ERROR: DEMASIADOS CARACTERES INGRESADOS\n", mensaje);
                retorno=0;
            }
        }while(retorno==0);
        strcpy(cadena, auxCadena);
    }
    return retorno;
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
    fflush(stdin);
    caracter=tolower(getc(stdin));
    }while(caracter!='m' && caracter!='f');
    return caracter;
}

void cadenaSoloLetras(char mensaje[], char cadena[], int len){
    char str[100];
    int i, flag=1;
    fflush(stdin);
    do{
        flag=1;
        printf("Ingrese %s: ", mensaje);
        fflush(stdin);
        scanf("%s", str);
        if(strlen(str)>len){
            printf("ERROR: LA CADENA NO SOPORTA DEMASIADOS CARACTERES\n");
            flag=0;
            continue;
        }
        for(i=0;i<100;i++){
            if(str[i]=='\0')
                break;
            if((str[i]!=' ')&&(str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z')){
                flag=0;
                break;
            }
        }
    }while(flag==0);
    strcpy(cadena, str);
}

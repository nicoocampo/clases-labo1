#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/** \brief Pide que el usuario ingrese un entero y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el entero
 * \return El entero validado
 *
 */
int pedirEntero(int* pNumero, char mensaje[]);


int pedirEnteroMaxMin(int* pNumero, int max, int min, char mensaje[]);

/** \brief Pide que el usuario ingrese un flotante y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el flotante
 * \return el flotante ya validado
 *
 */
int pedirFlotante(float* pNumero, char mensaje[]);

/** \brief Pide que el usuario ingrese un caracter
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el caracter
 * \return El caracter solicitado
 *
 */
int pedirCaracter(char* pCaracter, char mensaje[]);

/** \brief Pide que el usuario ingrese una cadena y la valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el cadena
 *
 */
int pedirCadena(char* pCadena,int len, char mensaje[]);

/** \brief Pide que el usuario que ingrese un caracter 'M' o 'F' y lo valida
 *
 * \param mensaje[] mensaje a mostrar en pantalla al pedir el cadena
 * \return El caracter solicitado
 *
 */
char pedirSexo(char mensaje[]);

void cadenaSoloLetras(char mensaje[], char cadena[], int len);

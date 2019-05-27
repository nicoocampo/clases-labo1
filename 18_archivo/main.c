#include <stdio.h>
#include <stdlib.h>
/*crear un empleado de forma dinamica
una funcion se va a encargar de recibir un empleado y lo va a guardar en un archivo de forma binaria
una funcion se va a encargar de leer y lo muestra desde la funcion*/

FILE* abrirArchivo(char path[]);
//LECTURA Y ESCRITURA DE UN ARCHIVO DE TIPO .txt
/**int main(){
    FILE* miArchivo;
    char nombre[30]="Nicolas";
    miArchivo=fopen("misDatos.txt","w");
    fprintf(miArchivo,"Su nombre es: \n%s",nombre);
    fclose(miArchivo);
    miArchivo=fopen("misDatos.txt","r");
    while(!feof(miArchivo)){
        fgets(nombre,30,miArchivo);
        printf("%s", nombre);
    }
    fclose(miArchivo);
    return 0;
}
*/
//LECTURA  ESCRITURA DE UN ARCHIVO DEL TIPO BINARIO .dat
int main(){
    FILE* pArch;
    int* number=(int*)malloc(sizeof(int)*3);
    number[0]=45; number[1]=8; number[2]=99;
    pArch=fopen("DATA.dat","wb");
    fwrite(number,sizeof(int),3,pArch);
    fclose(pArch);
    fopen("DATA.dat","rb");
    fread(number,sizeof(int),3,pArch);
    fclose(pArch);
    printf("%d\n%d\n%d\n", number[0], number[1], number[2]);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

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
    int* number=(int*)malloc(sizeof(int));
    *number=45;
    pArch=fopen("DATA.dat","wb");
    fwrite(number,sizeof(int),1,pArch);
    fclose(pArch);
    fopen("DATA.dat","rb");
    fread(number,sizeof(int),1,pArch);
    fclose(pArch);
    printf("%d", *number);
    return 0;
}


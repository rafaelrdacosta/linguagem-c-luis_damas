#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente um programa que abra o arquivo DADOS1.DAT criado
pelo programa anterior e mostre os valores nele presentes apenas
nas posi��es �mpares do arquivo.*/


int main(){
    FILE *fp;
    float v[10], x;
    int i;

    if((fp = fopen("DADOS1.DAT", "rb")) == NULL){
        printf("Imposs�vel abrir o arquivo %s\n\n", "DADOS1.DAT");
        exit(2);
    }

    for(i = 0; i < 10; i+=2){
        if(fread(&x, sizeof(float), 1, fp) == 0) /*falhou a leitura*/
            break;
        printf("%d. %.2f\n", i+1, x);
        /*o objetivo � saltar um float ap�s cada leitura do arquivo*/
        fseek(fp, sizeof(float), SEEK_CUR);
    }

    fclose(fp);
    return 0;
}

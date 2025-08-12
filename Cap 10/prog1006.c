#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int i=0, valor, n;

    /*Criar o arquivo lixo vazio*/
    if((fp = fopen("LIXO", "wb")) == NULL){
        printf("Imposs�vel criar o arquivo %s\n", "LIXO");
        exit(1);
    }
    fclose(fp);

    if((fp = fopen("LIXO", "rb")) == NULL){
        printf("Imposs�vel abrir o arquivo %s\n", "LIXO");
        exit(1);
    }
    /*Estamos diante de uma situa��o de EOF sempre que a posi��o
    corrente do arquivo estiver al�m do n�mero de bytes que ele ocupa.

    Se abrirmos um arquivo vazio n�o estaremos em situa��o de EOF:*/
    puts(feof(fp)?"EOF":"NOT EOF"); /*sa�da NOT EOF*/

    /*Tentar ler um caractere:*/
    fgetc(fp);

    /*S� depois de se tentar ler um caractere a partir de um arquivo
    vazio � que temos a garantia de EOF*/
     puts(feof(fp)?"EOF":"NOT EOF"); /*sa�da EOF*/

    fclose(fp);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Escreva um programa que abra um arquivo e indique quantos
bytes ele contém, obtendo esse valor através do Acesso Direto.*/

int main(int argc, char **argv){
    FILE *fp;
    long int nBytes;

    if(argc != 2){
        printf("Sintaxe:\n\n%s [arq]\n\n", argv[0]);
        exit(1);
    }

    if((fp = fopen(argv[1], "rb")) == NULL){
        printf("Impossível abrir o arquivo %s!!\n", argv[1]);
        exit(2);
    }

    /*Ir para o fim do arquivo*/
    fseek(fp, 0L, SEEK_END); /*ou fseek(fp, 0L, 2)
    0L indica deslocamento zero*/

    printf("O arquivo %s tem %ld bytes\n\n", argv[1], ftell(fp));

    fclose(fp);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Escreva um programa que abra um arquivo e indique quantos
bytes ele contém, obtendo esse valor através de Acesso sequencial.*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    long int nBytes=0;

    if(argc != 2){
        printf("Sintaxe\n\n%s [arq]\n\n", argv[0]);
        exit(1);
    }

    if((fp = fopen(argv[1], "rb")) == NULL){
        printf("Impossível abrir o arquivo %s\n\n", argv[1]);
        exit(2);
    }

    /*Acesso sequencial byte a byte*/
    while((fgetc(fp)) != EOF)
        nBytes++;

    /*podemos obter o mesmo resultado fazendo
    while((fgetc(fp)) != EOF)
        ;
    printf("O arquivo %s tem %ld bytes.\n", argv[1], ftell(fp);*/

    printf("O arquivo %s tem %ld bytes.\n", argv[1], nBytes);

    fclose(fp);
    return 0;
}

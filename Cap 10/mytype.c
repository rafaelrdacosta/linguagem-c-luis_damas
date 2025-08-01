#include<stdio.h>
#include<stdlib.h> /*função exit*/
#include<locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int ch; /*inteiro para ler os caracteres*/

    /*Testar a linha de comando*/
    if(argc != 2){
        printf("Sintaxe:\n\n%s Arquivo\n\n", argv[0]);
        exit(1); /*Termina o programa*/
    }
    /*Abrir o arquivo com o nome em argv[1]*/
    fp = fopen(argv[1], "r");

    if(fp == NULL){
        printf("Impossível abrir o arquivo %s\n", argv[1]);
        exit(2);
    }

    while((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}

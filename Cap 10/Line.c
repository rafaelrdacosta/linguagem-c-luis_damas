#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MAX_STR 120

/*Implemente o utilitário Line.c que mostre o conteúdo de
um arquivo recebido na linha de comando, mostrando para cada
linha o número respectivo.*/

int main(int argc, char **argv){
    FILE *fp;
    char linha[MAX_STR + 1]; /*Linha lida do arquivo*/
    int i = 0; /*contador de linhas*/

    if(argc == 1){
        printf("Sintaxe:\n\nLine [arquivo]\n\n");
        exit(1);
    }

    if((fp = fopen(argv[1], "r")) == 0){
        printf("Impossível abrir o arquivo %s!!\n", argv[1]);
        exit(2);
    }

    while(fgets(linha, MAX_STR+1, fp) != NULL){
        printf("%2d: %s", ++i, linha);
        i++;
    }

    fclose(fp);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

/*Escreva o utilitário upper que converte toda entrada proveniente
de um arquivo ou da entrada-padrão para maiúsculas, cuja sintaxe é:
upper [arquivo]*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int ch;

    switch(argc){
        case 1: printf("Digite uma string: ");
                fp = stdin;
                break;
        case 2: if((fp = fopen(argv[1], "r")) == NULL){
                    fprintf(stderr, "Impossível abrir o arquivo %s\n", argv[1]);
                    exit(1);
                }
                break;
        default: fprintf(stderr, "Sintaxe:\n\n%s [arquivo]\n", argv[0]);
                 exit(2);
    }
    while((ch = fgetc(fp)) != EOF)
        putchar(toupper(ch));
    fclose(fp);

    return 0;
}

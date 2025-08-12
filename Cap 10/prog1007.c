#include<stdio.h>
#include<stdlib.h> /*função exit*/
#include<locale.h>

/*Implemente um programa que conte o números de caracteres
de um arquivo passado na linha de comando

IMPLEMENTAÇÃO ERRADA*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int conta=0;

    if(argc != 2){
        printf("Sintaxe:\n\n%s [Arq]\n\n", argv[0]);
        exit(1);
    }

    if((fp = fopen(argv[1], "rb")) == NULL){
        printf("Impossível abrir o arquivo %s\n", argv[1]);
        exit(2);
    }

    while(!feof(fp)){ /*Irá retornar um caractere a mais devido ao
funcionamento da função EOF que só retorna verdadeiro após ler
além do fim do arquivo*/
        fgetc(fp);
        conta++;
    }

    fclose(fp);

    printf("Números de caracteres do arquivo - %d\n", conta);

    return 0;
}

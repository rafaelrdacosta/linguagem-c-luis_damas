#include<stdio.h>
#include<stdlib.h> /*fun��o exit*/
#include<locale.h>

/*Implemente um programa que conte o n�meros de caracteres
de um arquivo passado na linha de comando

IMPLEMENTA��O ERRADA*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int conta=0;

    if(argc != 2){
        printf("Sintaxe:\n\n%s [Arq]\n\n", argv[0]);
        exit(1);
    }

    if((fp = fopen(argv[1], "rb")) == NULL){
        printf("Imposs�vel abrir o arquivo %s\n", argv[1]);
        exit(2);
    }

    while(!feof(fp)){ /*Ir� retornar um caractere a mais devido ao
funcionamento da fun��o EOF que s� retorna verdadeiro ap�s ler
al�m do fim do arquivo*/
        fgetc(fp);
        conta++;
    }

    fclose(fp);

    printf("N�meros de caracteres do arquivo - %d\n", conta);

    return 0;
}

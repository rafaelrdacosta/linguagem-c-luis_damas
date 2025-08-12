#include<stdio.h>
#include<stdlib.h> /*função exit*/
#include<locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    FILE *fin, *fout;
    int ch;

    /*Testar a linha de comando*/
    if(argc != 3){
        printf("Sintaxe:\n\n%s Origem Destino\n\n", argv[0]);
        exit(1); /*Termina o programa*/
    }
    /*Abrir o arquivo de origem*/
    fin = fopen(argv[1], "rb");

    if(fin == NULL){
        printf("Impossível abrir o arquivo %s\n", argv[1]);
        exit(2);
    }

    /*Abrir o arquivo de destino*/
    if((fout = fopen(argv[2], "wb")) == NULL){
        printf("Impossível criar o arquivo %s\n", argv[2]);
        exit(3);
    }

    while((ch=fgetc(fin)) != EOF)
        fputc(ch, fout);

    fclose(fin);
    fclose(fout);

    return 0;
}

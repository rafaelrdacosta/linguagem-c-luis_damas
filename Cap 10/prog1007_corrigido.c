#include<stdio.h>
#include<stdlib.h> /*fun��o exit*/
#include<locale.h>

/*Implemente um programa que conte o n�meros de caracteres
de um arquivo passado na linha de comando
*/

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

    while(fgetc(fp) != EOF){
        conta++;
    }

    fclose(fp);

    printf("N�meros de caracteres do arquivo - %d\n", conta);

    return 0;
}

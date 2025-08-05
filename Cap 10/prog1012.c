#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente a função Qtos_Reais que recebe
o descritor de um arquivo flot já aberto para leitura
e devolve o número de floats que o arquivo contém,
deixando o arquivo apontar para o mesmo local pra onde
apontava quando entrou na função*/

long Qtos_Reais(FILE *fp);

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;

    if((fp = fopen("DADOS1.DAT", "rb")) == NULL){
        printf("Impossível abrir o arquivo %s!!\n\n", "DADOS1.DAT");
        exit(2);
    }

    printf("Exitem %ld números reais no arquivo %s.", Qtos_Reais(fp), "DADOS1.DAT");

    return 0;

}

long Qtos_Reais(FILE *fp){
    long nrFloats, old_pos = ftell(fp); /*posição corrente*/

    fseek(fp, 0L, SEEK_END);

    nrFloats = ftell(fp) / sizeof(float);

    /*Retornar a posição inicial*/
    fseek(fp, old_pos, SEEK_SET);

    return nrFloats;
}

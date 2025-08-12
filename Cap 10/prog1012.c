#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente a fun��o Qtos_Reais que recebe
o descritor de um arquivo flot j� aberto para leitura
e devolve o n�mero de floats que o arquivo cont�m,
deixando o arquivo apontar para o mesmo local pra onde
apontava quando entrou na fun��o*/

long Qtos_Reais(FILE *fp);

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;

    if((fp = fopen("DADOS1.DAT", "rb")) == NULL){
        printf("Imposs�vel abrir o arquivo %s!!\n\n", "DADOS1.DAT");
        exit(2);
    }

    printf("Exitem %ld n�meros reais no arquivo %s.", Qtos_Reais(fp), "DADOS1.DAT");

    return 0;

}

long Qtos_Reais(FILE *fp){
    long nrFloats, old_pos = ftell(fp); /*posi��o corrente*/

    fseek(fp, 0L, SEEK_END);

    nrFloats = ftell(fp) / sizeof(float);

    /*Retornar a posi��o inicial*/
    fseek(fp, old_pos, SEEK_SET);

    return nrFloats;
}

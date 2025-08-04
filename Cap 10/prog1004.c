#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Escreva um programa que carregue um vetor com 10 inteiros
lidos a partir do arquivo DADOS.DAT escritos em disco pelo
programa anterior.
Depois de ler os 10 inteiros deverá mostrá-los na tela*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int v[10], i, n;

    /*Abrir o arquivo DADOS.DAT*/
    if((fp = fopen("DADOS.DAT", "rb")) == NULL){
        printf("Impossível ler o arquivo %s\n", "DADOS.DAT");
        exit(1);
    }

    n = fread(v, sizeof(int), 10, fp);
    if(n != 10)
        fprintf(stderr, "Foram lidos apensas %d elementos!!\n", n);

    /*Apresentar os dados para o usuário*/
    printf("Vetor lido do arquivo DADOS.DAT:\n");
    for(i = 0; i < 10; i++)
        printf("%2dº Nr: %d\n", i+1, v[i]);

    fclose(fp);
    return 0;
}

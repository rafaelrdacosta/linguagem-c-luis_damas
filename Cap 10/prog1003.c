#include<stdio.h>
#include<stdlib.h> /*usar a função exit*/
#include<locale.h>

/*Escreva um programa que leia um vetor de 10 inteiros
a partir do teclado e guarde os seus valores no arquivo
DADOS.DAT*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int v[10], i;
    FILE *fp;

    /*Ler os dados a partir do teclado*/
    for(i = 0; i < 10; i++){
        printf("Introduza o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }

    /*Abrir o arquivo DADOS.DAT - data file
    A extensão .DAT é usada para representar arquivos de dados genéricos,
    especialmente quando o conteúdo é binário ou não necessariamente legível,
    e sim estruturado para leitura por programas*/

    if((fp = fopen("DADOS.DAT", "wb")) ==  NULL){
        printf("Impossível criar o arquivo %s\n", "DADOS.DAT");
        exit(1);
    }

    if(fwrite(v, sizeof(int), 10, fp) != 10)
        fprintf(stderr, "Não foram escritos todos os elementos!!\n");

    fclose(fp);

    return 0;
}

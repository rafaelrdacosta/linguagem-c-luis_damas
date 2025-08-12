#include<stdio.h>
#include<stdlib.h> /*usar a fun��o exit*/
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
        printf("Introduza o %d� n�mero: ", i + 1);
        scanf("%d", &v[i]);
    }

    /*Abrir o arquivo DADOS.DAT - data file
    A extens�o .DAT � usada para representar arquivos de dados gen�ricos,
    especialmente quando o conte�do � bin�rio ou n�o necessariamente leg�vel,
    e sim estruturado para leitura por programas*/

    if((fp = fopen("DADOS.DAT", "wb")) ==  NULL){
        printf("Imposs�vel criar o arquivo %s\n", "DADOS.DAT");
        exit(1);
    }

    if(fwrite(v, sizeof(int), 10, fp) != 10)
        fprintf(stderr, "N�o foram escritos todos os elementos!!\n");

    fclose(fp);

    return 0;
}

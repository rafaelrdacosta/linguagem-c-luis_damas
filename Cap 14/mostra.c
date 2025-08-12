#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente o utilitário mostra, cuja sintaxe é a seguinte:
    mostra [-pos1] [-pos2] [a1...an] [-oarq_saida]

O objetivo deste utilitário é mostrar apenas os caracteres
entre as posições Pos1 e Pos2 de cada linha dos arquivos.

Pos1 e Pos2 são opcionais e tem por padrão os valores 1 e 80.

A saída é normalmente feita para tela. Mas se o último parâmetro
apresentar o formato -oarq_saida a saída deverá ser enviada para
o arquivo arq_saida.

*/

#define MAX_LIN 80

void Mostra(FILE *fp, char *s, int pos1, int pos2);

int main(int argc, char **argv){
    int i;  /*Para percorrer os parâmetros*/
    FILE *fin, *fout=stdout; /*Arquivos de entrada e saída*/
    char linha[MAX_LIN+1]; /*Variável com a linha do arquivo*/

    int pos1=1, pos2=80;

    /*Testar a existência do parâmetro do arquivo de saída*/
    if(strnicmp(argv[argc-1], "-o", 2) == 0){
        if((fout=fopen(argv[argc-1]+2, "wt")) ==  NULL){ /*O arquivo não foi criado*/
            fprintf(stderr, "Impossível criar o arquivo %s\nOutput para a tela.\n", argv[argc-1]+2);
            fout = stdout;
        }
    }argc--; /*último parâmetro já foi tratado*/
    i=1;

    /*Verificar se temos -pos1*/
    if(argc>i && argv[i][0] == '-'){
        pos1 = atoi(argv[i]+1);
        /*Garantir que a pos1 está entre 1 e MAX_LIN*/
        pos1= min(max(pos1,1), MAX_LIN);
        i++;

        if(argc>i && argv[i][0] == '-'){
            pos2 = atoi(argv[i]+1);
            pos2= max(1, min(pos2, MAX_LIN));
            i++;
        }
    }

    for( ; i<argc; i++){
        fin = fopen(argv[i], "rt");
        if(fin == NULL)
            continue; /*passa para o próximo*/
        fprintf(fout, "%s\n", argv[i]);
        while(fgets(linha, MAX_LIN + 1, fin) != NULL){
            /*retirar o '\n*/
            if(linha[strlen(linha)-1] == '\n')
                linha[strlen(linha)-1] = '\0';
            Mostra(fout, linha, pos1, pos2);
        }
        fclose(fin);
    }
}

/*Mostra os caracteres existentes entre as pos1 e pos2 na string s*/
void Mostra(FILE *fp, char *s, int pos1, int pos2){
    int len = strlen(s), i;
    for(i=pos1; i<=pos2 && i<=len; i++)
        fputc(s[i-1], fp); /*strings em C começam o índice no zero*/
    fputc('\n', fp);
}

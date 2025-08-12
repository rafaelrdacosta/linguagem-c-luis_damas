#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

/*Implemente o utilit�rio mostra, cuja sintaxe � a seguinte:
    mostra [-pos1] [-pos2] [a1...an] [-oarq_saida]

O objetivo deste utilit�rio � mostrar apenas os caracteres
entre as posi��es Pos1 e Pos2 de cada linha dos arquivos.

Pos1 e Pos2 s�o opcionais e tem por padr�o os valores 1 e 80.

A sa�da � normalmente feita para tela. Mas se o �ltimo par�metro
apresentar o formato -oarq_saida a sa�da dever� ser enviada para
o arquivo arq_saida.

*/

#define MAX_LIN 80

void Mostra(FILE *fp, char *s, int pos1, int pos2);

int main(int argc, char **argv){
    int i;  /*Para percorrer os par�metros*/
    FILE *fin, *fout=stdout; /*Arquivos de entrada e sa�da*/
    char linha[MAX_LIN+1]; /*Vari�vel com a linha do arquivo*/

    int pos1=1, pos2=80;

    /*Testar a exist�ncia do par�metro do arquivo de sa�da*/
    if(strnicmp(argv[argc-1], "-o", 2) == 0){
        if((fout=fopen(argv[argc-1]+2, "wt")) ==  NULL){ /*O arquivo n�o foi criado*/
            fprintf(stderr, "Imposs�vel criar o arquivo %s\nOutput para a tela.\n", argv[argc-1]+2);
            fout = stdout;
        }
    }argc--; /*�ltimo par�metro j� foi tratado*/
    i=1;

    /*Verificar se temos -pos1*/
    if(argc>i && argv[i][0] == '-'){
        pos1 = atoi(argv[i]+1);
        /*Garantir que a pos1 est� entre 1 e MAX_LIN*/
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
            continue; /*passa para o pr�ximo*/
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
        fputc(s[i-1], fp); /*strings em C come�am o �ndice no zero*/
    fputc('\n', fp);
}

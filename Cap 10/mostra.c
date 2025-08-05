#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

#define OP_OUT "-o"


/*Sintaxe: mostra[-opcao][f1...fn][-opcao][fi...fk]... -oarq_out
O objetivo deste utilitário é mostrar apenas alguns caracteres
de cada arquivo, de acordo com as opções selecionadas:
-M - maiúsculas
-m - minúsculas
-d ou -D todos os dígitos
Por padrão a opção ativa é -M
*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");

    FILE *fin, *fout = stdout;
    int i; /*Para percorrer todos os parâmetros*/
    int ch; /*Para ler os caracteres do arquivo*/
    char opcao = 'M'; /*Por padrão maiúsculas*/

    /*Verificar se o último parâmetro é do tipo -oArq*/
    if(strncmp(argv[argc-1], OP_OUT, strlen(OP_OUT)) == 0){
        if((fout = fopen(argv[argc - 1] + 2, "wt")) ==  NULL){ /*argv[argc - 1] + 2 → pula os dois primeiros caracteres ("-o"),
e obtem o nome do arquivo de saída*/
            fprintf(stderr, "Impossível criar o arquivo %s\n\n", argv[argc - 1]);
            exit(1);
        }else
        argc--; /*o último parâmetro já foi tratado*/
    }

    for(i=1; i<argc; i++){
        if(argv[i][0] == '-'){  /*se for uma opção*/
            switch(argv[i][1]){
                case 'm':
                case 'M':
                case 'd':
                case 'D': opcao = argv[i][1];
                          break;
                /*se for qualquer outra opção ignorar*/
            }
        }else{/*É um arquivo*/
            fprintf(fout, "%s\n", argv[i]); /*Escrever o nome do arquivo atual*/
            if((fin = fopen(argv[i], "r")) ==  NULL){
                fprintf(stderr, "Erro ao abrir o arquivo %s\n", argv[i]);
                continue; /*passa para o próximo*/
            }
            while((ch = fgetc(fin)) != EOF){
                switch(opcao){
                    case 'm': if(islower(ch)) fputc(ch, fout);
                              break;
                    case 'M': if(isupper(ch)) fputc(ch, fout);
                              break;
                    case 'd':
                    case 'D': if(isdigit(ch)) fputc(ch, fout);
                              break;
                }
            }
        fclose(fin);
        fputc('\n', fout); /*mudar de linha*/
        }
    }
    if(fout != stdout)
        fclose(fout);
    exit(0);
}

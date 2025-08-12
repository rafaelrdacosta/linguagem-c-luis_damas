#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Implemente o utilitário conta, cuja sintaxe é a seguinte:
conta [-1] [arq]
Este programa deverá ler os dados a partir de um arquivo passado
como parâmetro (ou a entrada_padrão) e, para cada linha, deverá
indicar qual o número de caracteres que a formam.
Caso seja passado a opção -1, é também indicado o número da linha
correspondente
*/

#define MAX_LIN 80
#define MENOS '-' /*caractere de flag*/
#define MENOS_L "-1" /*flag esperada para mostrar nr das linhas*/

void Erro_Fatal(int num_erro, char *string);

int main(int argc, char **argv){
    FILE *fp =  stdin;
    char s[MAX_LIN + 1];
    int mostra_linhas = 0;
    int n_linha = 0;

    switch(argc){
        case 1:/*não há teste a fazer, pois todas as cargas iniciais
necessárias já foram realizadas -> fp = stdin*/
            break;
        case 2:
            if(strcmp(argv[1], MENOS_L) == 0) /*argv[1] é igual a -1*/
                mostra_linhas = 1;
            else
                if((fp = fopen(argv[1], "r")) ==  NULL) /*abrir sem mostrar o nr da linha*/
                    Erro_Fatal(2, argv[1]);
            break;
        case 3:
            if(argv[1][0] != MENOS)
                Erro_Fatal(3, argv[1]); /*Flag inválido*/
            if(strcmp(argv[1], MENOS_L) != 0) /*argv[1] é diferente de -1*/
                Erro_Fatal(3, argv[1]); /*Flag inválido*/
            mostra_linhas = 1;
            if((fp = fopen(argv[2], "r")) ==  NULL)
                    Erro_Fatal(2, argv[2]);
            break;
        default:
            Erro_Fatal(1, "");
    }
    while(fgets(s, MAX_LIN + 1, fp) != NULL){
        s[strlen(s) - 1] = '\0'; /*tirar o \n*/
        if(mostra_linhas)
            fprintf(stdout, "%d: %d\n", ++n_linha, strlen(s));
        else
            printf("%d\n", strlen(s));
    }
    fclose(fp);
    return 0;
}

void Erro_Fatal(int num_erro, char *string){
    switch(num_erro){
    case 1: /*mostrar a sintaxe*/
        fprintf(stderr, "Sintaxe:\n\nconta [-1] [Arq]\n\n");
        break;
    case 2: /*Erro de abertura do arquivo*/
        fprintf(stderr, "Impossível abrir o arquivo '%s'\n", string);
        break;
    case 3: /*Opção inválida*/
        fprintf(stderr, "Opção \"%s\" inválida\n", string);
    }
    exit(num_erro);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Implemente o utilit�rio conta, cuja sintaxe � a seguinte:
conta [-1] [arq]
Este programa dever� ler os dados a partir de um arquivo passado
como par�metro (ou a entrada_padr�o) e, para cada linha, dever�
indicar qual o n�mero de caracteres que a formam.
Caso seja passado a op��o -1, � tamb�m indicado o n�mero da linha
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
        case 1:/*n�o h� teste a fazer, pois todas as cargas iniciais
necess�rias j� foram realizadas -> fp = stdin*/
            break;
        case 2:
            if(strcmp(argv[1], MENOS_L) == 0) /*argv[1] � igual a -1*/
                mostra_linhas = 1;
            else
                if((fp = fopen(argv[1], "r")) ==  NULL) /*abrir sem mostrar o nr da linha*/
                    Erro_Fatal(2, argv[1]);
            break;
        case 3:
            if(argv[1][0] != MENOS)
                Erro_Fatal(3, argv[1]); /*Flag inv�lido*/
            if(strcmp(argv[1], MENOS_L) != 0) /*argv[1] � diferente de -1*/
                Erro_Fatal(3, argv[1]); /*Flag inv�lido*/
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
        fprintf(stderr, "Imposs�vel abrir o arquivo '%s'\n", string);
        break;
    case 3: /*Op��o inv�lida*/
        fprintf(stderr, "Op��o \"%s\" inv�lida\n", string);
    }
    exit(num_erro);
}

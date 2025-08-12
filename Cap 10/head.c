/*Implementar o utilit�rio head, com a seguinte sintaxe:
head [-n] [arqin]

Colocar na sa�da padr�o as primeiras n linhas do arquivo passado na linha
de comando.

Os valores entre colchetes s�o opcioanis.

Caso o valor de n n�o seja passado, mostra-se as primeiras 10 linhas.

Caso o arquivo n�o seja passado, dever� ser feito o processamento a
partir da entrada padr�o.*/


#include<stdio.h>
#include<stdlib.h> /*Fun��o atoi para converter a string contendo o
n�mero passado na linha de comando para o inteiro que ela representa
Fun��o exit - que permite terminar o progama*/

#define MAX_LIN 80 /*nr m�ximo de caracteres por linha*/
#define SINAL '-' /*caractere que nos permitir� saber se � um n�mero ou
nome de um arquivo*/

/*Mostra o erro e termina o programa*/
void Erro_Fatal(int num_erro, char *string){
    switch(num_erro){
    case 1: /*mostrar a sintaxe*/
        fprintf(stderr, "Sintaxe:\n\nhead [-n] [Arq]\n\n");
        break;
    case 2: /*Erro de abertura do arquivo*/
        fprintf(stderr, "Imposs�vel abrir o arquivo '%s'\n", string);
        break;
    }
    exit(num_erro);
}

int main(int argc, char **argv){
    FILE *fp = stdin; /*conter informa��es sobre o arquivo - stdin por padr�o*/
    char s[MAX_LIN + 1]; /*para guardar cada linha do arquivo + 1(\0)*/
    int i = 0; /*contar as linha processadas*/
    int n_lins = 10; /*indicar qtas linhas ser�o mostradas*/

    switch(argc){ /*pode varia entre 1 e 3 por conta da sintaxe padr�o*/
        case 1: /*n�o h� teste a fazer, pois todas as cargas iniciais
necess�rias j� foram realizadas -> fp = stdin*/
            break;
        case 2: /*pode ser "head -n" ou "head arq" */
                if(argv[1][0] == SINAL)
                    n_lins = atoi(argv[1] + 1); /*n�mero de linhas � igual
        o segundo caractere de argv[1]*/
                else
                    if((fp = fopen(argv[1], "r")) == NULL)
                        Erro_Fatal(2, argv[1]);
            break;
        case 3: /*temos a seguinte sintaxe "head -n arq*"*/
                if(argv[1][0] != SINAL)
                    Erro_Fatal(1, "");
                else{
                    n_lins = atoi(argv[1] + 1);
                    if((fp = fopen(argv[2], "r")) == NULL)
                        Erro_Fatal(2, argv[1]);
                }
                break;
        default: Erro_Fatal(1, "");
    }
    /*Leitura das strings do arquivo enquanto o n�mero de linhas
    a serem apresentadas estiver em falta ou n�o se encontrar o final
    do arquivo*/
    while(fgets(s, MAX_LIN + 1, fp) != NULL && i++ < n_lins)
        printf(s);
    fclose(fp);
    return 0;
}


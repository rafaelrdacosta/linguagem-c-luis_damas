#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


/*Implemente o utilitário Proc cuja sintaxe é a seguinte:
Proc [-t] Arquivo

O arquivo é constituído por expressões binárias entre dois
inteiros, e o objetivo do utilitário é mostrar cada uma das
expressões e o respectivo resultado.
No final deverá ser mostrada a soma total do resultado de cada
uma das expressões.
Se a opção -t for passada, apenas se deve mostrar o total global
das somas das expressões.*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int So_Total = 0; /*Por padrão processa tudo*/
    int n1, n2; /*operandos*/
    char op; /*operador*/
    long res, total=0L; /*Total acumulado*/

    if(argc == 3){
        So_Total = (stricmp(argv[1], "-t") == 0); /*ver se argv[2] == "-t"
        Se for So_Total recebe 1, que serve para suprimir a exibição das
        expressões individuais*/
    }

    if(argc < 2 || argc > 3){
        fprintf(stderr, "Sintaxe:\n\nProc [-t] [arquivo]\n\n");
        exit(1);
    }


    if((fp=fopen(argv[argc - 1], "r")) ==  NULL){
        fprintf(stderr, "Impossível abrir o arquivo %s!!", argv[argc - 1]);
        exit(2);
    }

    while(fscanf(fp, "%d%c%d", &n1, &op, &n2) == 3){ /*leu as 3 variáveis*/
       switch(op){
            case '+': res = n1 + n2;
                break;
            case '-': res = n1 - n2;
                break;
            case '*': res = n1 * n2;
                break;
            case '/': res = n1 / n2;
                break;
       }
       if(!So_Total)
            printf("%d %c %d = %ld\n", n1, op, n2, res);
       total += res;
    }
    printf("Total da soma das operações: %ld\n", total);
    fclose(fp);
    return 0;
}

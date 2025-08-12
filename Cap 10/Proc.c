#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


/*Implemente o utilit�rio Proc cuja sintaxe � a seguinte:
Proc [-t] Arquivo

O arquivo � constitu�do por express�es bin�rias entre dois
inteiros, e o objetivo do utilit�rio � mostrar cada uma das
express�es e o respectivo resultado.
No final dever� ser mostrada a soma total do resultado de cada
uma das express�es.
Se a op��o -t for passada, apenas se deve mostrar o total global
das somas das express�es.*/

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
    FILE *fp;
    int So_Total = 0; /*Por padr�o processa tudo*/
    int n1, n2; /*operandos*/
    char op; /*operador*/
    long res, total=0L; /*Total acumulado*/

    if(argc == 3){
        So_Total = (stricmp(argv[1], "-t") == 0); /*ver se argv[2] == "-t"
        Se for So_Total recebe 1, que serve para suprimir a exibi��o das
        express�es individuais*/
    }

    if(argc < 2 || argc > 3){
        fprintf(stderr, "Sintaxe:\n\nProc [-t] [arquivo]\n\n");
        exit(1);
    }


    if((fp=fopen(argv[argc - 1], "r")) ==  NULL){
        fprintf(stderr, "Imposs�vel abrir o arquivo %s!!", argv[argc - 1]);
        exit(2);
    }

    while(fscanf(fp, "%d%c%d", &n1, &op, &n2) == 3){ /*leu as 3 vari�veis*/
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
    printf("Total da soma das opera��es: %ld\n", total);
    fclose(fp);
    return 0;
}

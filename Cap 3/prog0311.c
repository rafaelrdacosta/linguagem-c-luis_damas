#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char estadoCivil;

    printf("\nInforme seu Estado Civil\nC/c: Casado\nS/s: Solteiro\nD/d: Divorciado\nV/v: Viúvo\n");
    scanf(" %c", &estadoCivil);

    if(estadoCivil == 'C' || estadoCivil == 'c')
        printf("\nCasado\n");
    else if(estadoCivil == 'S' || estadoCivil == 's')
        printf("\nSolteiro\n");
        else if(estadoCivil == 'D' || estadoCivil == 'd')
            printf("\nDivorciado\n");
            else if(estadoCivil == 'V' || estadoCivil == 'v')
                printf("\nViúvo\n");
                else
                    printf("\nEstado Civil inválido!\n");

    return 0;
}


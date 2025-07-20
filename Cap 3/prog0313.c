#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char estadoCivil;

    printf("\nInforme seu Estado Civil\nC/c: Casado\nS/s: Solteiro\nD/d: Divorciado\nV/v: Viúvo\n");
    scanf(" %c", &estadoCivil);

    switch(estadoCivil){
        case 'C':
        case 'c':
            printf("\nCasado\n");
            break;
        case 'S':
        case 's':
            printf("\nSolteiro\n");
            break;
        case 'D':
        case 'd':
            printf("\nDivorciado\n");
            break;
        case 'V':
        case 'v':
            printf("\nViúvo\n");
            break;
        default:
            printf("\nEstado Civil inválido!\n");
    }
    return 0;
}

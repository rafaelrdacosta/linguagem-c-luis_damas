#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char estadoCivil;

    printf("\nInforme seu Estado Civil\nC/c: Casado\nS/s: Solteiro\nD/d: Divorciado\nV/v: Vi�vo\n");
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
            printf("\nVi�vo\n");
            break;
        default:
            printf("\nEstado Civil inv�lido!\n");
    }
    return 0;
}

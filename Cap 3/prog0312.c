#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char estadoCivil;

    printf("\nInforme seu Estado Civil\nC: Casado\nS: Solteiro\nD: Divorciado\nV: Vi�vo\n");
    scanf(" %c", &estadoCivil);

    switch(estadoCivil){
        case 'C':
            printf("\nCasado\n");
            break;
        case 'S':
            printf("\nSolteiro\n");
            break;
        case 'D':
            printf("\nDivorciado\n");
            break;
        case 'V':
            printf("\nVi�vo\n");
            break;
        default:
            printf("\nEstado Civil inv�lido!\n");
    }
    return 0;
}

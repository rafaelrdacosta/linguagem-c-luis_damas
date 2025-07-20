#include<stdio.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int mes, n_dias;

    printf("\nDigite o número do mês de 1 a 12: ");
    scanf("%d", &mes);

    switch(mes){
        case 2:
            n_dias = 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n_dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            n_dias = 30;
            break;
        default:
            printf("\nMês inválido!\n");
    }

    printf("Mês %d tem %d dias.\n", mes, n_dias);

    return 0;
}

#include<stdio.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int mes, n_dias;

    printf("\nDigite o número do mês de 1 a 12: ");
    scanf("%d", &mes);

    if(mes == 2)
        n_dias = 28;
    else
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
            n_dias = 31;
        else
            if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
                n_dias = 30;
            else
                printf("\nMês inválido!\n");

    printf("Mês %d tem %d dias.\n", mes, n_dias);

    return 0;
}

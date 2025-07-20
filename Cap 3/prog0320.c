#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n_horas;
    long res;
    char tipo;

    printf("\nInforme o número de horas: ");
    scanf("%d", &n_horas);

    printf("\nO que mostar [m/s/d]: ");
    scanf(" %c", &tipo);
    res = n_horas;
    switch(tipo){
        case 'd':
        case 'D':
            res = res * 10;

        case 's':
        case 'S':
            res = res * 60;

        case 'm':
        case 'M':
            res = res * 60;
    }
    printf("\n%d hora(s) tem %ld%c.\n", n_horas, res, tipo);
    return 0;
}

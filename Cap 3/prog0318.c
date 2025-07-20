#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n_horas;
    long res;
    char tipo;

    printf("\nInforme o n�mero de horas: ");
    scanf("%d", &n_horas);

    printf("\nO que mostar [m/s/d]: ");
    scanf(" %c", &tipo);

    switch(tipo){
        case 'm':
        case 'M':
            res = n_horas < 0 ? 0 : n_horas*(long)60;
            break;
        case 's':
        case 'S':
            res = n_horas < 0 ? 0 : n_horas*(long)3600;
            break;
        case 'd':
        case 'D':
            res = n_horas < 0 ? 0 : n_horas*(long)36000;
            break;
    }

    printf("\n%d hora(s) tem %ld%c.\n", n_horas, res, tipo);
    return 0;
}

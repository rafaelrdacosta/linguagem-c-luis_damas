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

    if(tipo == 'm' || tipo == 'M')
        res = n_horas < 0 ? 0 : n_horas*(long)60;
    else
        if(tipo == 's' || tipo == 'S')
           res = n_horas < 0 ? 0 : n_horas*(long)3600;
        else
            if(tipo == 'd' || tipo == 'D')
                res = n_horas < 0 ? 0 : n_horas*(long)36000;
            else
                printf("\nO que mostar inválido!\n");
    printf("\n%d hora(s) tem %ld%c.\n", n_horas, res, tipo);
    return 0;
}

#include<stdio.h>
#include<locale.h>

/*Escreva um programa que solicite ao usuário uma determinada data e a mostre em seguida
no formato dd/mm/aaaa.*/


main(){
    setlocale(LC_ALL,"Portuguese");

    int dia, mes, ano;
    printf("Dia (dd): ");
    scanf("%d", &dia);
    printf("Mês (mm): ");
    scanf("%d", &mes);
    printf("Ano (aaaa): ");
    scanf("%d", &ano);

    printf("Data completa: %d/%d/%d\n", dia, mes, ano);
}

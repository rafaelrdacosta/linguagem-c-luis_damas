#include<stdio.h>
#include<locale.h>

/*Escreva um programa que solicite ao usuário uma determinada data no formato
 aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaaa.*/


main(){
    setlocale(LC_ALL,"Portuguese");

    int dia, mes, ano;
    printf("Digite uma data no formato (aaaa-mm-dd): ");
    scanf("%d-%d-%d", &ano, &mes, &dia);

    printf("Data completa: %d/%d/%d\n", dia, mes, ano);
}

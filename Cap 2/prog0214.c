#include<stdio.h>
#include<locale.h>

/*Escreva um programa que solicite um inteiro (0 e 255)
ao usu�rio e mostre o inteiro seguinte e o caractere correspondente*/

main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero (0 e 255): ");
    scanf("%d", &num);

    printf("Inteiro digitado %d cujo caractere � '%c'.\n", num, (char)num);
    printf("Inteiro seguinte %d cujo caractere � '%c'.\n", num + 1, (char)(num + 1));
}

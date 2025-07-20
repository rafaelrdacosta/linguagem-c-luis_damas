#include<stdio.h>

/*Escreva um programa que leia um caractere e a seguir o escreva na tela*/

main(){
    char ch;

    printf("Digite um caractere: ");
    scanf("%c", &ch);

    printf("O caractere digitado foi '%c'.\n", ch);
}

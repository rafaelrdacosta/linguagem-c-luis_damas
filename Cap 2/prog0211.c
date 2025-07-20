#include<stdio.h>

/*Escreva um programa que leia um caractere e a seguir o escreva na tela*/

main(){
    char ch;

    printf("Digite um caractere: ");
    ch = getchar();

    printf("O caractere digitado foi '%c'.\n", ch);
}


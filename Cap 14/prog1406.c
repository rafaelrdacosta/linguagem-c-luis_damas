#include<stdio.h>

int main(){
    int n;

    n = 10;
    printf("Valor inteiro: %d Valor em Octal: %o\n", n, n);

    n = 010; /*Valor em octal*/
    printf("Valor inteiro: %d Valor em Octal: %o\n", n, n);
    return 0;
}

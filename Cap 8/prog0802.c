#include<stdio.h>

main(){
    char s[100];
    char *ptr = s; /*aponta para o primeiro caractere de s*/

    printf("Introduza uma string: ");
    gets(s);

    if(*ptr == '\0') /*string vazia*/
        return;

    /*Imprimir a string normalmente*/
    while(*ptr != '\0')
        putchar(*ptr++);

    printf("\n");

    /*Imprimir a string invertida*/
    ptr--; /*por conta do '\0*/

    while(ptr >= s) /*enquanto ptr for >= que &s[0]*/
        putchar(*ptr--);

    printf("\n");
}

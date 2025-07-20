#include<stdio.h>

/*Recebe uma string e devolve o inteiro que nela
está representado.

Array to integer*/

int atoi(char *s){
    int i = 0, res = 0, sinal = 1;

    if(s[0] == '-' || s[0] == '+')
        i = 1;
    if(s[0] == '-')
        sinal = -1;

    for( ; isdigit(s[i]) ; i++)
        res = res * 10 + s[i] - '0';
    return res*sinal;
}

main(){
    char string[50] = "abc";

    printf("%d\n", atoi(string));
}


#include<stdio.h>

/*Coloca em todas as posições da string S o caractere CH,
devolvendo S*/

char *strset(char *s, char ch){
    int i;
    for(i = 0; s[i] != '\0'; i++)
        s[i] = ch;
    s[i] = '\0';
    return s;
}

main(){
    char nome[50]  = "Alf";
    char ch = 'A';

    printf("%s\n", strset(nome, ch));
}

#include<stdio.h>

/*Substitui todos os caracteres da string s
por espaços em branco*/

char *allspaces(char *s){
    for(int i = 0; s[i] != '\0'; i++)
        s[i] = ' ';
    return s;
}

main(){
    char string[50] = "Alfa";

    printf("%s", allspaces(string));
    printf("Fim da string...\n");
}

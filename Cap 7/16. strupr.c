#include<stdio.h>

/*Coloca todos os caracteres da strin S em maiúsculas*/

char *strupr(char *s){
    int i;
    for(i = 0; s[i] != '\0'; i++)
        s[i] = toupper(s[i]);
    return s;
}

main(){
    char nome[50] = "rafael";

    printf("%s\n", strupr(nome));
}

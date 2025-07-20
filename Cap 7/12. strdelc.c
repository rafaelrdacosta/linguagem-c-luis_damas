#include<stdio.h>

/*String delete char*/

char *strdelc(char *s, char ch){
    int i, j;
    for(i = j = 0; s[i] != '\0'; i++)
        if(s[i] != ch)
            s[j++] = s[i];
    s[j] = '\0';
    return s;
}

main(){
    char nome[50] = "apaga caracteres";
    char ch = 'a';
    printf("%s\n", strdelc(nome, ch));
}

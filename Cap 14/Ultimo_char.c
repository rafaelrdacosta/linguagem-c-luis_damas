#include<stdio.h>

/*Retorna o �ltimo caractere da string, ou o terminador,
caso ela esteja vazia*/

char Ultimo(char *s);

int main(){
    char string[] = "bento";
    printf("%c\n", Ultimo(string));
    return 0;
}

char Ultimo(char *s){
    if(*s == '\0')
        return '\0';
    else
        return s[strlen(s)-1];
}



#include<stdio.h>

/*Coloca o caractere ch apenas nas primeiras n posições
da string S.
Se n > strlen(s) então n toma o valor de strlen(s)*/

/*char *strnset(char *s, char ch, int n){
    if(n > strlen(s))
        n = strlen(s);
    for(int i = 0; i < n; i++)
        s[i] = ch;
    return s;
}*/

char *strnset(char *s, char ch, int n){
    for(int i = 0; s[i] != '\0' && i < n; i++)
        s[i] = ch;
    return s;
}

main(){
    char string[50] = "alfabeto";
    char ch = 'y';
    int n = 23;

    printf("%s\n", strnset(string, ch, n));
}

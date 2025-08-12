#include<stdio.h>
#include<string.h>

/*Apaga em s1 a primeira ocorr�ncia de s2*/

char *StrDelStr(char *s1, char *s2){
    char *loc = strstr(s1, s2);
    if(loc != NULL) /*se s2 existir em s1*/
        /*loc aponta para o in�cio de "ra" dentro de "rato".

strlen(s2) � 2, ent�o loc + 2 aponta para o primeiro caractere ap�s "ra".*/
        strcpy(loc, loc+strlen(s2));
    return s1;
}

main(){
    char s[100] = "O rato roeu a rolha da garrafa de rum do rei da R�ssia";
    char r[50] = "ra";
    printf("%s\n", StrDelStr(s, r));
}

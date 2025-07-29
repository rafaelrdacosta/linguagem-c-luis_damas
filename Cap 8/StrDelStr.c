#include<stdio.h>
#include<string.h>

/*Apaga em s1 a primeira ocorrência de s2*/

char *StrDelStr(char *s1, char *s2){
    char *loc = strstr(s1, s2);
    if(loc != NULL) /*se s2 existir em s1*/
        /*loc aponta para o início de "ra" dentro de "rato".

strlen(s2) é 2, então loc + 2 aponta para o primeiro caractere após "ra".*/
        strcpy(loc, loc+strlen(s2));
    return s1;
}

main(){
    char s[100] = "O rato roeu a rolha da garrafa de rum do rei da Rússia";
    char r[50] = "ra";
    printf("%s\n", StrDelStr(s, r));
}

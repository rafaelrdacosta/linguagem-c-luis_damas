#include<stdio.h>

/*Recebe uma string e duplica seu conteúdo*/

char *strduplica(char *s){
    int i, len = strlen(s);
    for(i = 0; i < len; i++)
       s[i + len] = s[i];
    s[i + len] = '\0';
    return s;
}


main(){
    char string[50] = "Ana";
    printf("%s\n", strduplica(string));
}

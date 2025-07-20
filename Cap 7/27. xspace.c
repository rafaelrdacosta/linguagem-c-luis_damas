#include<stdio.h>

/*Colocar um espaço depois de cada caractere*/

char *xspace(char *s){
    int i = strlen(s);
    s[2*i] = s[i];
    for(i--; i >= 0; i--){
        s[2*i] = s[i];
        s[2*i + 1] = ' ';
    }
    return s;
}

main(){
    char string[50] = "Era uma vez";

    printf("%s\n", xspace(string));
}



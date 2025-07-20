#include<stdio.h>
#include<string.h>

/*String reverse*/

char *strrev(char *s){
    int i, len;
    char aux;
    for(i = 0, len = strlen(s) - 1; i < len; i++, len--){
        aux = s[i];
        s[i] = s[len];
        s[len] = aux;
    }
    return s;
}

main(){
    char palavra[50] = "araujo";

    printf("%s\n", strrev(palavra));
}

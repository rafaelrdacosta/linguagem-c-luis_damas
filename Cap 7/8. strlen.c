#include<stdio.h>

/*String length*/

int strlen(char *s){
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

main(){
    char Nome[] = "strlen devolve o nr de caracteres!";
    printf("%d", strlen(Nome));
}

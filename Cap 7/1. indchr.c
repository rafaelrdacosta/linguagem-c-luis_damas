#include<stdio.h>

int indchr(char *s, char ch){
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            return i;
    return -1;
}

main(){
    printf("%d\n", indchr("15 abacates", '#'));
}

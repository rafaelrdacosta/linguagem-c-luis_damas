#include<stdio.h>

/*Insere a string orig no início da string dest,
retornando dest*/

char *strcpy(char *dest, char *orig){
    int len;
    for(len = strlen(orig); len >= 0; len--)
        dest[len] = orig[len];
    return dest;
}

char *memcpy(char *dest, char *orig, int n){
    for(int i=0; i<n; i++)
        dest[i] = orig[i];
    return dest;
}

char *strins(char *dest, char *orig){
    strcpy(dest+strlen(orig), dest);
    memcpy(dest, orig, strlen(orig));
    return dest;
}

main(){
    char s[100] = " Autonoma";
    char s2[100] = "Universidade";
    strins(s, s2);
    printf("%s", s);
}

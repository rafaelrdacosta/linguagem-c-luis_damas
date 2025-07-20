#include<stdio.h>

/*Devolve o número de caracteres alfabéticos em S*/

int isalpha(char ch){
    return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

int strcounta(char *s){
    int i, count = 0;
    for(i = 0; s[i] != '\0'; i++)
        if(isalpha(s[i]))
            count++;
    return count;
}

main(){
    char string[50] = "15 abacates";

    printf("%d\n", strcounta(string));
}

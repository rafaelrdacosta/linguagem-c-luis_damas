#include<stdio.h>
int isdigit(char c){
    return (c >= '0' && c <= '9');
}

int isalpha(char c){
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

int isalnum(char c){
    return isdigit(c) || isalpha(c);
}

main(){
    char ch = '=';
    printf("%d\n", isalnum(ch));
}

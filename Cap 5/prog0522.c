#include<stdio.h>

int isalpha(char c){
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

main(){
    char ch = '1';
    printf("%d\n", isalpha(ch));
}

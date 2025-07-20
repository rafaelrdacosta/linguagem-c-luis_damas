#include<stdio.h>

int isupper(char c){
    return (c >= 'A' && c <= 'Z');
}

main(){
    char ch = 'E';
    printf("%d\n", isupper(ch));
}

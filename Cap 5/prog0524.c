#include<stdio.h>

int islower(char c){
    return (c >= 'a' && c <= 'z');
}

main(){
    char ch = 'r';
    printf("%d\n", islower(ch));
}

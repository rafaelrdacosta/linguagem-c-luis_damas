#include<stdio.h>

int isdigit(char c){
    return (c >= '0' && c <= '9');
}

main(){
    char ch = '*';
    printf("%d\n", isdigit(ch));
}

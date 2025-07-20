#include<stdio.h>

int isVogal(char ch){
    return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U';
}

/*
int isVogal(char ch){
    ch = toupper(ch);
    return ch == ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
*/

main(){
    char ch = 'R';

    printf("%d", isVogal(ch));
}

#include<stdio.h>

char toupper(char c){
    if(c >= 'a' && c <= 'z')
        return c + 'A' - 'a';
    else
        return c;
}

main(){
    char ch = 'W';

    printf(" %c", toupper(ch));

}

#include<stdio.h>

char tolower(char c){
    if(c >= 'a' && c <= 'z')
        return c + 'A' - 'a';
    else
        return c;
}

main(){
    char ch = 'C';

    printf(" %c", tolower(ch));

}

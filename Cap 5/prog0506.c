#include<stdio.h>

linha(int num, char ch){
    for(int i = 1; i <= num; i++)
        putchar(ch);
    putchar('\n');
}

main(){

    linha(3, '+');
    linha(5, '+');
    linha(7, '-');
    linha(5, '*');
    linha(3, '*');
}

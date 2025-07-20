#include<stdio.h>

void linha();

main(){
    linha();
    printf("Hello World\n");
    linha();
}

void linha(){
    for(int i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
}

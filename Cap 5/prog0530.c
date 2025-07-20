#include<stdio.h>

int Minus(valor){
    if(valor > 0)
        return -valor;
    else
        return valor;
}

main(){
    int num = 10;

    printf("Minus (%d) -> %d\n", num, Minus(num));
}

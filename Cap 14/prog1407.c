#include<stdio.h>

int main(){
    int n=10;
    printf("Valor inteiro: %d  Valor em Hexadecimal: %x\n", n, n);

    n=0x1D; /*Valor em hexadecimal*/
    printf("Valor inteiro: %d  Valor em Hexadecimal: %x\n", n, n);


    printf("Valor inteiro: %d  Valor em Hexadecimal: %X\n", n, n);

    return 0;
}

#include<stdio.h>

int main(){
    unsigned char ch = 0xFF & 0x80; /*Máscara para o obter o 1º bit = 1000 0000*/
    int i;

    for(i=0; i<=8; i++, ch = ch >> 1) /*ch >> i = desloca 1 bit à direita a cada iteração*/
        printf("i = %d: valor: %d\n", i, ch);

}

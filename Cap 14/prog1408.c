#include<stdio.h>

int main(){
    unsigned char ch = 0xFF & 0x80; /*Máscara para o obter o 1º bit = 1000 0000*/
    int i;

    for(i=0; i<=8; i++)
        printf("i = %d: valor: %d\n", i, ch >> i); /*ch >> i = desloca i bits à direita a cada iteração*/

}

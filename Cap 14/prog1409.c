#include<stdio.h>

int main(){
    unsigned char ch = 0xFF & 0x80; /*M�scara para o obter o 1� bit = 1000 0000*/
    int i;

    for(i=0; i<=8; i++, ch = ch >> 1) /*ch >> i = desloca 1 bit � direita a cada itera��o*/
        printf("i = %d: valor: %d\n", i, ch);

}

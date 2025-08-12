#include<stdio.h>

#define VAR(x) n##x

int main(){

    int n1=100, n2=200;


    printf("Valor de n1 = %d\n", VAR(1));
    printf("Valor de n2 = %d\n", VAR(2));
}

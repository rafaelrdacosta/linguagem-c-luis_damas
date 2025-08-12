#include<stdio.h>

int iszero(int n);

int main(){
    printf("%d\n", iszero(4));
    return 0;
}

int iszero(int n){
    return n == 0;
}

#include<stdio.h>

void zero(int *n);

int main(){
    int n = 2456;
    printf("%d\n", n);
    zero(&n);
    printf("%d\n", n);

}

void zero(int *n){
    *n = 0;
}

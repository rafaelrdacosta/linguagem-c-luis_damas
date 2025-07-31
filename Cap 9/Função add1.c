#include<stdio.h>

void add1(int *n);

int main(){
    int n = 2;
    add1(&n);
    printf("%d\n", n);

}

void add1(int *n){
    (*n)++;
}

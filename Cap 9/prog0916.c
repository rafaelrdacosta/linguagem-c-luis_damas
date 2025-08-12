#include<stdio.h>

int Exp(int n, int a);

int main(){
    printf("%d\n", Exp(2, 3));
    return 0;
}


int Exp(int n, int a){
    int i, res = 0;
    for(i = 1; i <= n; i++)
        res += (a+i/n) * (a+i/n);
    return res;
}

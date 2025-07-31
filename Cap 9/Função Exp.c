#include<stdio.h>

int Pot(int x, int n);
float Exp(float x, int n, float t);

int main(){
    printf("%d\n", Exp(8.0, 2, 2.0));
    return 0;
}

int Pot(int x, int n){
   if(n == 0)
    return 1.0;
   else
    return x * Pot(x,n-1);
}

float Exp(float x, int n, float t){
    if(n<1)
        return 0;
    else
        return x/Pot(1+t, n) + Exp(x, n-1, t);
}

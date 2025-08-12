#include<stdio.h>

/*Implemente a função Pot que devolve o valor de
x elevado a n*/

int Pot(int x, int n);

main(){
    printf("%d\n", Pot(8, 2));
}

int Pot(int x, int n){
   if(n == 0)
    return 1.0;
   else
    return x * Pot(x,n-1);
}

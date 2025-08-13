#include<stdio.h>

/*Retorna o valor inverso de x ou
um valor adequado*/

float Inverso(int x);

int main(){
    int x = 10;
    printf("%.2f\n", Inverso(x));
    return 0;
}

float Inverso(int x){
    if(x == 0)
        return 0.0;
    else
        return 1/(float)x;
}

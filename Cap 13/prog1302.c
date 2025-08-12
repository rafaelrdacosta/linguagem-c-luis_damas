#include<stdio.h>

#define Mult(x, y) (x)*(y)  /*Os parênteses tem que ser colocados para
que não haja problemas de precedência*/

int main(){

    printf("%d * %d = %d\n", 3+1, 2+3, Mult(3+1, 2+3));

}

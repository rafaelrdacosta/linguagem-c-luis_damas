#include<stdio.h>

#define Mult(x, y) (x)*(y)  /*Os par�nteses tem que ser colocados para
que n�o haja problemas de preced�ncia*/

int main(){

    printf("%d * %d = %d\n", 3+1, 2+3, Mult(3+1, 2+3));

}

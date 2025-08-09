#include<stdio.h>

#define Mult(x, y) ((x)*(y)) /*Além dos parênteses nas variáveis devem
ser colocados parênteses externos para lidar com problemas de precedência.
*/

int main(){
    printf("%d\n", 1000/Mult(2+3, 7+3));

    return 0;
}

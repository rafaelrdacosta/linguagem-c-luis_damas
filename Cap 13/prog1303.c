#include<stdio.h>

#define Mult(x, y) ((x)*(y)) /*Al�m dos par�nteses nas vari�veis devem
ser colocados par�nteses externos para lidar com problemas de preced�ncia.
*/

int main(){
    printf("%d\n", 1000/Mult(2+3, 7+3));

    return 0;
}

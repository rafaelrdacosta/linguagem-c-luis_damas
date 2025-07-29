#include<stdio.h>

main(){
    int x = 2, y = 3, *px, *py;
    px = &x;
    py = &y;

    printf("%d %d\n", x, y); /*sáida - 2 e 3*/
    printf("%d %d\n", *px, *py); /*sáida - 2 e 3*/
    printf("%d %d\n", &px, &py); /*endereços de memórias do ponteiros*/

    px = py;

    printf("%d %d %d %d %d %d %d %d\n", x, &x, px, *px, y, &y, py, *py);

}


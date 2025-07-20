#include<stdio.h>

int is_square(int x, int y){
    return ( x == y * y);
}

main(){
    int x = 12, y = 3;

    printf("%d\n", is_square(x, y));
}

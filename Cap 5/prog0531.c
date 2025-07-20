#include<stdio.h>

int is_special(int x){
    return 2 * x == x * x;
}

main(){
    int x = 3;

    printf("%d\n", is_special(x));
}

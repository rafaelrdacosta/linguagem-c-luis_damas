#include<stdio.h>

int Entre(int x, int lim_inf, int lim_sup){
    return (x >= lim_inf && x <= lim_sup);
}

main(){
    printf("%d\n", Entre(11, 2, 10));
}

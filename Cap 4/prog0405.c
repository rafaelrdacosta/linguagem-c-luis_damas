#include<stdio.h>

main(){

    int num = 1;
    while(num <= 5){
        int i  = 1;
        while(i <= 10){
            printf("%2d x %2d = %2d\n", num, i, num * i);
            i++;
        }
    num++;
    }
}


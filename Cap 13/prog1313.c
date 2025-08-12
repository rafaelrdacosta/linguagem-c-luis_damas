#include<stdio.h>

#define MAX 43
#define MIN -1

#define ZAP(x, v1, v2) (((x) <= 0)?(x)*(v1):(x)*(-(v2)))

int main(){
    int i = 0, j = (int) 'a';

    i = ZAP(i + j, MAX-1, MIN-1);

    printf("%d\n", i);

    return 0;
}

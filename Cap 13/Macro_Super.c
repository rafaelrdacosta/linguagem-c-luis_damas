#include<stdio.h>

#define Abs(x) (((x)>=0)?(x):-(x))
#define Max(x,y) (((x)>(y))?(x):(y))
#define Super(a, b, c) Max(Max(Abs(a-b), Abs(b-c)), Abs(a-c))

int main(){
    printf("%d\n", Super(7,2,4));
}

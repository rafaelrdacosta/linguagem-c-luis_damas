#include<stdio.h>

/*Varável global declarada no main, para utilizá-la
declara-se como extern*/
extern int var;

int f1(int n){
    return 2*n+var;
}

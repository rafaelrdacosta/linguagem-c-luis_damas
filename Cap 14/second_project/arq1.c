#include<stdio.h>

/*Var�vel global declarada no main, para utiliz�-la
declara-se como extern*/
extern int var;

int f1(int n){
    return 2*n+var;
}

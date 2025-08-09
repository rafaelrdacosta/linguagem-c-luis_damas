#include<stdio.h>

#define Show(x) printf(#x)

int main(){
    Show(Maria);
    putchar('\n');
    Show(Maria "Alice" Belarmino
         );
    putchar('\n');
    Show(Maria Alice);
}

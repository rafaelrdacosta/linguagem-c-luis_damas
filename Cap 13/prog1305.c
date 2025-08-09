#include<stdio.h>

#define DEBUG

int main(){
    int i, n=0;

#undef DEBUG

#ifndef DEBUG
    puts("Debug: Desativado");
#endif // DEBUG

for(i=0; i<10; i++){
   n=n+i;

#ifdef DEBUG
    printf("DEBUG Info: i = %d n=%d\n", i, n);
#endif // DEBUG
}
    printf("Resultado: %d\n", n);

    return 0;
}



#include<stdio.h>

//#define DEBUG

int main(){
    int i, n=0;
    for(i=1; i<10; i++){
        n=n+1;
#ifdef DEBUG
    printf("DEBUG Info: i = %d n=%d\n", i, n);
#endif // DEBUG
    }
    printf("Resultado: %d\n", n);
    return 0;
}

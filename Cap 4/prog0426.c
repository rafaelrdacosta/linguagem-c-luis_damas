#include<stdio.h>

main(){
    int i = 0;

    while(i++) //teste da condição falso não executa o printf
       printf("%d\n", i);
}

#include<stdio.h>

main(){
    int num;

    do{
       printf("\nDigite um numero: ");
       scanf("%d", &num);
    }while(num < 1 || num > 100);

    printf("\nNumero digitado: %d\n", num);
}

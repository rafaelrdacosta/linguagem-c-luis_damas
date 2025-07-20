#include<stdio.h>

main(){
    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    int i = num;
    while(i >= num){
        if(i % 3 != 0){
            printf("%d\n", i);
        }
    i++;
    if(i % 10 == 0)
        break;
    }
}

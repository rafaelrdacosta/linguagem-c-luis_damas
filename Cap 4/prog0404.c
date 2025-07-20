#include<stdio.h>

main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int i = 1;
    while(i <= 10){
        printf("%2d x %2d = %2d\n", num, i, num * i);
        i++;
    }

}

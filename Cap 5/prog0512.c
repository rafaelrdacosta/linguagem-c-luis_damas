#include<stdio.h>

int Abs(int x){
    if(x < 0)
        return -x;
    else
        return x;
}

main(){
    int num;

    printf("Digite um nr inteiro: ");
    scanf("%d", &num);

    printf("Abs (%d) --> %d\n", num, Abs(num));
}

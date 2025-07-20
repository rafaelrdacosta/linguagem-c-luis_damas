#include<stdio.h>

int Impar(int x){
    return (x % 2 != 0);
}


main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Impar: %d\n", Impar(num));
}

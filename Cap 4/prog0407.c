#include<stdio.h>

main(){
    int i, num, soma, produto;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    for(soma = 0, produto = i = 1; i <= num; i++){
        soma += i;
        produto *= i;
    }
    printf("\nSoma = %d\n", soma);
    printf("Produto = %d\n", produto);
}

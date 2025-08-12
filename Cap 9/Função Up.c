#include<stdio.h>

/*Mostra os n primeiros números de forma dcrescente*/

void Up(int n);

main(){
    int n;
    puts("Digite um numero inteiro: ");
    while(scanf("%d", &n) == 0){
        printf("Valor invalido! Digite um numero: ");
        fflush(stdin);
    }
    Up(n);
}

void Up(int n){
    if(n < 1)  /*Critério de término da função*/
        return;
    Up(n - 1);
    printf("%d ", n);
}

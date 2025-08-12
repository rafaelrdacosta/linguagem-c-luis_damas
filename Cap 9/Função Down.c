#include<stdio.h>

/*Mostra os n primeiros números de forma decrescente*/

void Down(int n);

main(){
    int n;
    puts("Digite um numero inteiro: ");
    while(scanf("%d", &n) == 0){
        printf("Valor invalido! Digite um numero: ");
        fflush(stdin);
    }
    Down(n);
}

void Down(int n){
    if(n < 1)  /*Critério de término da função*/
        return;
    printf("%d ", n);
    Down(n - 1);
}

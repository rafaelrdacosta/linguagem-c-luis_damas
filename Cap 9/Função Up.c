#include<stdio.h>

/*Mostra os n primeiros n�meros de forma dcrescente*/

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
    if(n < 1)  /*Crit�rio de t�rmino da fun��o*/
        return;
    Up(n - 1);
    printf("%d ", n);
}

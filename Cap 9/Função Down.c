#include<stdio.h>

/*Mostra os n primeiros n�meros de forma decrescente*/

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
    if(n < 1)  /*Crit�rio de t�rmino da fun��o*/
        return;
    printf("%d ", n);
    Down(n - 1);
}

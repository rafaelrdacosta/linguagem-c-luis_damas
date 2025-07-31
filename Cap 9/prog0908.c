#include<stdio.h>

/*Implemente a função fatorial que calcula o valor de
n! = n*(n-1) * (n - 2) *... * 2 * 1  */

unsigned fatorial(int n);

main(){
    int k;

    puts("Introduza um numero para calcular o fatorial: ");
    while(scanf("%d", &k) == 0){ /*enquanto introduzir números*/
        printf("Número inválido! Digite novamente: ");
        fflush(stdin);
    }

    printf("%d! = %u\n", k, fatorial(k));

}

unsigned fatorial(int n){
    unsigned i, res = 1; /*pois vamos realizar multiplicações*/
    for(i = 1; i <= n; i++)
        res *= i;
    return res;
}

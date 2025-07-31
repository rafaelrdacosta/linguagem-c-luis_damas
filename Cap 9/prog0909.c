#include<stdio.h>
#include<locale.h>

/*Recursiva
Implemente a função fatorial que calcula o valor de
n! = n*(n-1) * (n - 2) *... * 2 * 1  */

unsigned fatorial(int n);

main(){
    setlocale(LC_ALL, "Portuguese");

    int k;

    puts("Introduza um número para calcular o fatorial: ");
    while(scanf("%d", &k) == 0){ /*enquanto introduzir números*/
        printf("Número inválido! Digite novamente: ");
        fflush(stdin);
    }

    printf("%d! = %u\n", k, fatorial(k));

}

unsigned fatorial(int n){
    if(n == 0) /*Critério para término*/
        return 1;
    else
        return n*fatorial(n - 1); /*Chamada recursiva*/
}

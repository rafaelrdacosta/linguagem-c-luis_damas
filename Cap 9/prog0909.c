#include<stdio.h>
#include<locale.h>

/*Recursiva
Implemente a fun��o fatorial que calcula o valor de
n! = n*(n-1) * (n - 2) *... * 2 * 1  */

unsigned fatorial(int n);

main(){
    setlocale(LC_ALL, "Portuguese");

    int k;

    puts("Introduza um n�mero para calcular o fatorial: ");
    while(scanf("%d", &k) == 0){ /*enquanto introduzir n�meros*/
        printf("N�mero inv�lido! Digite novamente: ");
        fflush(stdin);
    }

    printf("%d! = %u\n", k, fatorial(k));

}

unsigned fatorial(int n){
    if(n == 0) /*Crit�rio para t�rmino*/
        return 1;
    else
        return n*fatorial(n - 1); /*Chamada recursiva*/
}

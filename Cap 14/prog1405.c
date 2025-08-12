#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i;

    printf("Introduza um nr inteiro: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
        if(n==i)
            goto salta1;
        else
            if(n*i==50)
                goto salta2;

    puts("Nenhuma condição se verificou.");
    goto end;

    salta1: //label
        puts("n: Valor entre 1 e 10");
        goto end;
    salta2: //label



        puts("n*i: Produto múltiplo de 50");
        goto end;
    end:

    return 0;
}

#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("\nDigite um número: ");
    scanf("%d", &x);

    if(x) /*perde-se legibilidade, pois aproveita-se o valor da variável
    com valor lógico, utilizando-se como FALSO (zero) ou VERDADE (diferente
de zero).*/
        printf("\n%d é diferente de zero!\n", x);
    else
        printf("\n%d é igual a zero!\n", x);
}

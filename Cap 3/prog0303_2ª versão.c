#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("\nDigite um n�mero: ");
    scanf("%d", &x);

    if(x) /*perde-se legibilidade, pois aproveita-se o valor da vari�vel
    com valor l�gico, utilizando-se como FALSO (zero) ou VERDADE (diferente
de zero).*/
        printf("\n%d � diferente de zero!\n", x);
    else
        printf("\n%d � igual a zero!\n", x);
}

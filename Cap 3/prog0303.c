#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("\nDigite um número: ");
    scanf("%d", &x);

    if(x != 0) /*retorna VERDADE mas tudo que é diferente de zero é verdade
    então pode ser escrito if(x)*/
        printf("\n%d é diferente de zero!\n", x);
    else
        printf("\n%d é igual a zero!\n", x);
}

#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("\nDigite um n�mero: ");
    scanf("%d", &x);

    if(x != 0) /*retorna VERDADE mas tudo que � diferente de zero � verdade
    ent�o pode ser escrito if(x)*/
        printf("\n%d � diferente de zero!\n", x);
    else
        printf("\n%d � igual a zero!\n", x);
}

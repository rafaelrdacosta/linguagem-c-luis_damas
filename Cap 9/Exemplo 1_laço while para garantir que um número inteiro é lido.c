#include<stdio.h>
#include<locale.h>

/*scnaf - retorna um inteiro indicando o número de variáveis
lidas com sucesso*/


main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    puts("Introduza um Nº inteiro: ");
    while(scanf("%d", &n) == 0)
        fflush(stdin);
    printf("Valor inteiro: %d\n", n);

}

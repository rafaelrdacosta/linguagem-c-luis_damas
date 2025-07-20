#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i, j;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    for(i = 1, j = num; i <= num, j >= 1; i++, j--)
        printf("%2d - %2d\n", i, j);



}

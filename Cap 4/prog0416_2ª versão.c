#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i, j;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
        printf("%2d - %2d\n", i, num - i + 1);
}

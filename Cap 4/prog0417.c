#include<stdio.h>

main(){
    int num, i, j;
    char caracter;

    printf("Digite um numero e um caracter: ");
    scanf("%d %c", &num, &caracter);

    for(i = 0; i <= num; i++){
        for(j = 0; j <= num; j++)
            printf("%c", caracter);
        putchar('\n');
    }
}

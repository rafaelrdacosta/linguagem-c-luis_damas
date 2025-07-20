#include<stdio.h>

main(){
    int num;

    printf("\nDigite a altura da arvore: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", (char)i + 64);
        }putchar('\n');
    }
}

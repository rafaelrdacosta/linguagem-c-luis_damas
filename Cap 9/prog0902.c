#include<stdio.h>

void troca(int *a, int *b);


main(){
    int n, k;
    puts("Introduza dois nrs inteiros: ");
    scanf("%d %d", &n, &k);

    printf("Antes da troca n = %d, k = %d\n", n, k);
    troca(&n, &k);
    printf("Depois da troca n = %d, k = %d\n", n, k);
}

void troca(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

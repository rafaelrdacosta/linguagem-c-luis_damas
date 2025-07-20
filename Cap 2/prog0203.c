#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Introduza dois números: ");
    scanf("%d%d", &n1, &n2);

    printf("O resultado de %d + %d = %d\n", n1, n2, n1 + n2);
}

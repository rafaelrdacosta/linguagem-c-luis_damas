#include<stdio.h>

main(){
    int x, y;

    printf("Digite dois n�meros inteiros:\n");
    scanf("%d%d", &x, &y);

    printf("O resultado de %d == %d : %d\n", x, y, x == y);
    printf("O resultado de %d > %d : %d\n", x, y, x > y);
    printf("O resultado de %d >= %d : %d\n", x, y, x >= y);
    printf("O resultado de %d < %d : %d\n", x, y, x < y);
    printf("O resultado de %d <= %d : %d\n", x, y, x <= y);
    printf("O resultado de %d != %d : %d\n", x, y, x != y);
}

#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, tmp;

    printf("\nDigite dois n�meros:\n");
    scanf("%d%d", &x, &y);

    if(x > y){
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("\Ordem crescente: %d, %d\n", x, y);
}

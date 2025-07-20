#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("\nDigite um número: ");
    scanf("%d", &x);

    if(x >= 0)
        printf("\nNúmero positivo ou igual a zero!\n");
    else
        printf("\nNúmero negativo!\n");
}

#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("\nDigite um n�mero: ");
    scanf("%d", &x);

    if(x >= 0)
        printf("\nN�mero positivo ou igual a zero!\n");
    else
        printf("\nN�mero negativo!\n");
}

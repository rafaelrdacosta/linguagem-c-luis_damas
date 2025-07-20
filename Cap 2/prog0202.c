#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Introduza um Nº: ");
    scanf("%d", &num);

    printf("O Nº introduzido foi %d\n", num);
}

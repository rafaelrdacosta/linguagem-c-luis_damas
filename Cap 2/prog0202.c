#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Introduza um N�: ");
    scanf("%d", &num);

    printf("O N� introduzido foi %d\n", num);
}

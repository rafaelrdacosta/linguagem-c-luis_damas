#include<stdio.h>
#include<locale.h>

/*Escreva um programa em C que solicite um determinado n�mero
real e mostre qual a sua parte inteira e a sua parte fracion�ria.*/

main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um n�mero real: ");
    scanf("%f", &num);

    printf("Parte inteira: %d\n", (int)num);
    printf("Parte fracion�ria: %.2f\n", num - ((int)num));
}

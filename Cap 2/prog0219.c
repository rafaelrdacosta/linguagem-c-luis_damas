#include<stdio.h>
#include<locale.h>

/*Escreva um programa em C que solicite um determinado número
real e mostre qual a sua parte inteira e a sua parte fracionária.*/

main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    printf("Parte inteira: %d\n", (int)num);
    printf("Parte fracionária: %.2f\n", num - ((int)num));
}

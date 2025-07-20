#include<stdio.h>
#include<locale.h>

/*Escreva um programa em C que peça ao usuário dois inteiros e apresente
o resultado da realização das operações aritméticas tradicionais*/


main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int num1, num2;

    //Entrada de dados pelo usuário
    printf("Digite dois números inteiros: ");
    scanf("%d%d", &num1, &num2);

    //Apresentação dos resultados
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtração: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicação: %d x %d = %d\n", num1, num2, num1 * num2);
    printf("Divisão inteira: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Resto da Divisão: %d %% %d = %d\n", num1, num2, num1 % num2);
}

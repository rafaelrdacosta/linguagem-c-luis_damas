#include<stdio.h>
#include<locale.h>

/*Escreva um programa em C que pe�a ao usu�rio dois inteiros e apresente
o resultado da realiza��o das opera��es aritm�ticas tradicionais*/


main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int num1, num2;

    //Entrada de dados pelo usu�rio
    printf("Digite dois n�meros inteiros: ");
    scanf("%d%d", &num1, &num2);

    //Apresenta��o dos resultados
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtra��o: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplica��o: %d x %d = %d\n", num1, num2, num1 * num2);
    printf("Divis�o inteira: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Resto da Divis�o: %d %% %d = %d\n", num1, num2, num1 % num2);
}

#include<stdio.h>

/*Escreva um programa que solicite, através da função scanf,
um caractere ao usuárioe, em seguida, peça outro. Depois de
introduzido ambos os caracteres, tal programa deverá mostrar os dois
caracteres lidos entre aspas simples.*/

main(){
    char ch1, ch2;

    printf("Digite um caractere: ");
    scanf("%c", &ch1); /*o enter será colocado no variável ch2 e o
    programa não irá funcionar como esperado*/

    printf("Digite outro caractere: ");
    scanf(" %c", &ch2); /*para corrigir coloca-se um espaço em branco antes do &c,
    assim  o scanf vai ignorar e retirar do buffer todos os separadores -
    \n, \t... ou pode usar a função fflush(stdin)*/

    printf("Caracteres digitados '%c' e '%c'.\n", ch1, ch2);
}

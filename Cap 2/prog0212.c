#include<stdio.h>

/*Escreva um programa que solicite, atrav�s da fun��o scanf,
um caractere ao usu�rioe, em seguida, pe�a outro. Depois de
introduzido ambos os caracteres, tal programa dever� mostrar os dois
caracteres lidos entre aspas simples.*/

main(){
    char ch1, ch2;

    printf("Digite um caractere: ");
    scanf("%c", &ch1); /*o enter ser� colocado no vari�vel ch2 e o
    programa n�o ir� funcionar como esperado*/

    printf("Digite outro caractere: ");
    scanf(" %c", &ch2); /*para corrigir coloca-se um espa�o em branco antes do &c,
    assim  o scanf vai ignorar e retirar do buffer todos os separadores -
    \n, \t... ou pode usar a fun��o fflush(stdin)*/

    printf("Caracteres digitados '%c' e '%c'.\n", ch1, ch2);
}

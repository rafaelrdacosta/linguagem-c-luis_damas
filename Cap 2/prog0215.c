#include<stdio.h>

 /*M� implementa��o*/

 main(){
    int num = 1000;

    printf("Introduza um caractere: ");
    scanf("%c", &num);

    printf("O valor de num = %d cujo caractere = '%c'\n", num, (char)num);
    /*a sa�da ser� (se for digitado A) -> O valor de num = 883 cujo caracactere � 'A'
    O valor 1000 j� atribu�do a num ocupam dois bytes = 0000 0011 1110 1000,
    e ao receber o 'A' que tem ASCII 65 e ocupa um byte, somente o byte da direita
    ser� substitu�do = 0000 0011 0100 0001 = 883*/

 }

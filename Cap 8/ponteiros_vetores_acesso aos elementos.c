#include<stdio.h>

/*Ponteiro e vetores  - acesso aos elementos*/

main(){
    char s[] = "OlaOleOli";
    char *ptr = s; /* ptr fico com o &s[0]*/

    /*Caractere existente na posição índice 2 do vetor*/
    printf("%c\n", s[2]);
    printf("%c\n", *(ptr + 2));
    printf("%c\n", *(s + 2));
    printf("%c\n", ptr[2]);

}

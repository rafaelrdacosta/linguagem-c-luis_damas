#include<stdio.h>

/*Verificar se o comprimento da string é igual
ao valor que é enviado a função*/

int Is_Len_OK(char *s, int comprimento){
    return (strlen(s) == comprimento);
}

main(){
    char string[50] = "ola";
    printf("%d\n", Is_Len_OK(string, 3));
}

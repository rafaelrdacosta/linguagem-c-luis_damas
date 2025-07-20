#include<stdio.h>

/*Devolve o caractere com maior código ASCII
presente na string.
Se a string estiver vazia, devolve '\0'.*/

char MAX_Ascii(char *str){
    int i;
    char res = '\0';
    for(int i = 0; str[i] != '\0'; i++)
        res = res > str[i]? res: str[i];
    return res;
}

main(){
    char string[50] = "";

    printf("%c\n", MAX_Ascii(string));
}

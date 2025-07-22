#include<stdio.h>

/*Função strchr - retorna o endereço da primeira
ocorrência de ch em s, caso não exista retorna NULL.*/

int *strchr(char *s, char ch){
    while(*s != '\0'){
        if(*s == ch)
            return s;
        else
            s++;
    }
    return NULL;
}

main(){
    char string[20];
    char ch;

    printf("Introduza uma string: ");
    gets(string);
    printf("Introduza um caractere: ");
    scanf(" %c", &ch);

    puts(strchr(string, ch));
}

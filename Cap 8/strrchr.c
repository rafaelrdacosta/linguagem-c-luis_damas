#include<stdio.h>



/*Retorna o endere�o da �ltima ocorr�ncia de ch em s,
caso n�o exista, retorna NULL*/

char *strrchr(char *s, char ch){
    char *ptr = s + strlen(s) - 1;
    while(ptr >= s)
        if(*ptr == ch)
            return ptr;
        else
            ptr--;
    return NULL;
}

main(){
    char nome[100];
    char *sobrenome;

    printf("Introduza seu nome completo: ");
    gets(nome);

    sobrenome = strrchr(nome, ' ');

    if(sobrenome == NULL)
        sobrenome = nome;
    else
        sobrenome++;
    puts(sobrenome);
}

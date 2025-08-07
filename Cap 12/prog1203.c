#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char *str;

    /*Criar String str*/
    str = (char *) malloc(10);

    /*Colocar Maria na string str*/
    strcpy(str, "Maria");

    printf("String: %s\nEndereço: %p\n", str, str);

    str = (char *) realloc(str, 100);

    printf("String: %s\nNovo Endereço: %p\n", str, str);

    /*Liberar memória*/
    free(str);

    return 0;
}

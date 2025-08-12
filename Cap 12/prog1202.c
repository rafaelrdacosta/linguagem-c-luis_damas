#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    char s[200], *ptr;

    printf("Qual a sua string: ");
    gets(s);

    /*Alocar a memória necessária*/
    ptr = (char *) malloc(strlen(s) + 1); /*'\0' também conta*/

    if(ptr == NULL)
        printf("Problemas na Alocação da Memória!");
    else{
        /*Colocar na string ptr uma cópia da string s*/
        strcpy(ptr, s);

        /*Mostrar as duas strings*/
        printf("String original: %s\nCópia: %s\n", s, ptr);

        /*Liberar a memória existente em ptr*/
        free(ptr);
    }
    return 0;
}

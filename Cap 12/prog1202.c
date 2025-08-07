#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    char s[200], *ptr;

    printf("Qual a sua string: ");
    gets(s);

    /*Alocar a mem�ria necess�ria*/
    ptr = (char *) malloc(strlen(s) + 1); /*'\0' tamb�m conta*/

    if(ptr == NULL)
        printf("Problemas na Aloca��o da Mem�ria!");
    else{
        /*Colocar na string ptr uma c�pia da string s*/
        strcpy(ptr, s);

        /*Mostrar as duas strings*/
        printf("String original: %s\nC�pia: %s\n", s, ptr);

        /*Liberar a mem�ria existente em ptr*/
        free(ptr);
    }
    return 0;
}

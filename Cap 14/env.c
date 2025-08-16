#include<stdio.h>

int main(int argc, char **argv, char **env){
    char *ptr;

    while(*env!=NULL){ /*Cada string no array env representa uma vari�vel
de ambiente no formato NOME=VALOR*/
        ptr = strchr(*env, '='); /*Essa fun��o busca a primeira ocorr�ncia
do caractere '=' na string.*/
        if(ptr!=NULL){
            *ptr = '\0'; /*Se a vari�vel for v�lida, essa linha � a parte
mais cr�tica do c�digo. Ela substitui o caractere '=' pelo terminador de
string (\0). Isso efetivamente "corta" a string, fazendo com que a primeira
parte (NOME) seja tratada como uma string separada.*/
            printf("%s --> %s\n", *env, ptr+1);
        }env++;
    }
    return 0;
}

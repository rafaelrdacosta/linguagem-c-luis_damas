#include<stdio.h>

int main(int argc, char **argv, char **env){
    char *ptr;

    while(*env!=NULL){ /*Cada string no array env representa uma variável
de ambiente no formato NOME=VALOR*/
        ptr = strchr(*env, '='); /*Essa função busca a primeira ocorrência
do caractere '=' na string.*/
        if(ptr!=NULL){
            *ptr = '\0'; /*Se a variável for válida, essa linha é a parte
mais crítica do código. Ela substitui o caractere '=' pelo terminador de
string (\0). Isso efetivamente "corta" a string, fazendo com que a primeira
parte (NOME) seja tratada como uma string separada.*/
            printf("%s --> %s\n", *env, ptr+1);
        }env++;
    }
    return 0;
}

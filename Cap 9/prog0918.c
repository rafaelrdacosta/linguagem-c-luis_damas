#include<stdio.h>

int main(int argc, char **argv, char **env){
   while(*env) /*enquanto env n�o for igual a NULL*/
        puts(strchr(*env++, '=') + 1); /*avan�a um caractere
        ap�s o '=', ou seja, pega apenas o valor da vari�vel*/
}

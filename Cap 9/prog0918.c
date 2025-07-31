#include<stdio.h>

int main(int argc, char **argv, char **env){
   while(*env) /*enquanto env não for igual a NULL*/
        puts(strchr(*env++, '=') + 1); /*avança um caractere
        após o '=', ou seja, pega apenas o valor da variável*/
}

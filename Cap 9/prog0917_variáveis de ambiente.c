#include<stdio.h>

/* *env conte�do apontado
    pelo ponteiro env que � uma string como "PATH=/usr/bin",
    que representa o nome da vari�vel seguido de igual
     e o seu valor*/

int main(int argc, char **argv, char **env){
   while(*env) /*enquanto env n�o for igual a NULL*/
        puts(*env++);
}

#include<stdio.h>

/* *env conteúdo apontado
    pelo ponteiro env que é uma string como "PATH=/usr/bin",
    que representa o nome da variável seguido de igual
     e o seu valor*/

int main(int argc, char **argv, char **env){
   while(*env) /*enquanto env não for igual a NULL*/
        puts(*env++);
}

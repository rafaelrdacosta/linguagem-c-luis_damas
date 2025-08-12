#include<stdio.h>
#include<string.h>

/*Recebe uma string e verifica se � um arquivo.
Para ser considerado, o nome do arquivo deve conter
pelo menos um caractere � esquerda do ponto e um
caractere � direita do ponto.*/

int isFile(char *s);

int main(){
    char string[] = "DADOS.";
    printf("%d", isFile(string));
    return 0;
}

int isFile(char *s){
    /*char *strchr(const char *str, int c);*/
    char *pos_pt = strchr(s, '.');

    if(pos_pt == NULL) /*N�o existe o caractere na string*/
        return 0;
    if(pos_pt == s) /*N�o existe caracteres a esquerda*/
        return 0;
    if(*(pos_pt+1)=='\0') /*N�o existe caracters a direita*/
        return 0;
    return 1;
}

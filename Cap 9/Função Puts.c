#include<stdio.h>

/*Implemente a fun��o Puts que coloca na tela a string
recebida por par�metro seguida de um NewLine*/

char *Puts(char *s);

int main(){
    char string[] = "Rafael";
    Puts(string);

    return 0;
}

char *Puts(char *s){
    if(*s=='\0')
        putchar('\n');
    else{
        putchar(*s); /*escreve o caracter corrente*/
        Puts(s+1);
    }
}

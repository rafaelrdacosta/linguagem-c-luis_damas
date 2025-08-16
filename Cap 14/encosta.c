#include<stdio.h>
#include<ctype.h>
#include<string.h>

/*Essa função recebe uma string e coloca todos os caracteres
maiúsculos encostados à esquerda e o minúsculos à direita*/

char *Encosta(char *s);

int main(){
    char string[] = "123AbCd45";
    printf("%s\n", Encosta(string));
    return 0;
}

char *Encosta(char *s){
    int i, len = strlen(s)-1, existem_alteracoes;
    char tmp;
    do{
       existem_alteracoes = 0;
       for(i=0; i<len;i++)
            if(!isupper(s[i]) && isupper(s[i+1]) ||
       islower(s[i]) && !islower(s[i+1])){
              tmp = s[i];
              s[i] = s[i+1];
              s[i+1] = tmp;
              existem_alteracoes = 1;
            }

    }while(existem_alteracoes);
    return s;
}

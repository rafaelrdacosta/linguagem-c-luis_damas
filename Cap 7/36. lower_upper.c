#include<stdio.h>
#include<string.h>

/*Recebe uma string de caracteres alfabéticos e coloca
todos os caracteres em minúsculas, alinhados a esquerda,
na ordem em que apareceram. Os maiúsculos alinhados na
ordem à direita*/

char *lower_upper(char *s){
    int i, existem_trocas = 1, len = strlen(s);
    char tmp;

    while(existem_trocas){
        existem_trocas = 0;
        for(i = 0; i < len - 1; i++)
            if(isupper(s[i]) && islower(s[i+1])){
                tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                existem_trocas = 1;
        }
    }
    return s;
}

main(){
    char string[50] = "EraUmaVezUMCavalo";
    printf("%s\n", lower_upper(string));
}

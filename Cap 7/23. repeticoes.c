#include<stdio.h>

/*Recebe uma string, retirando-lhe todos os caracteres
que não se encontram repetidos*/

int strcountc(char *s, char ch){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            count++;
    return count;
}

char *repeticoes(char *s){
    int i, j;
    for(i = j = 0; s[i] != '\0'; i++)
        if(strcountc(s, s[i])>1)
            s[j++] = s[i];
    s[j] = '\0';
    return s;
}

main(){
    char string[50] = "ALFACE";
    char str[50] = "ALTA FIDELIDADE";

    printf("%s\n", repeticoes(string));
    printf("%s\n", repeticoes(str));
}

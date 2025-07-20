#include<stdio.h>

/*Coloca em cada posição da string o próximo caractere ASCII*/

char *Prox_Char(char *s){
    for(int i; s[i] != '\0'; i++){
        s[i] = s[i] + 1;
    }
    return s;
}

main(){
    char string[50] = "A8M0";

    printf("%s\n", Prox_Char(string));
}

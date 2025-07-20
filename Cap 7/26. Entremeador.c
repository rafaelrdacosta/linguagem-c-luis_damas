#include<stdio.h>

/*Transforma a string s, deixando apenas os caracteres
existentes de n em n posições*/


char *Entremeador(char *s, int n){
    int i, j;
    for(i = j = 0; s[i] != '\0'; i+=n+1){
        s[j] = s[i];
        j++;
    }
    s[j] = '\0';
    return s;
}

main(){
    char string[50] = "ABCDEFGHIJLMN";

    printf("%s\n", Entremeador(string, 3));

}

#include<stdio.h>

/*Recebe uma string e compacta num único caractere,
qualquer conjunto de caracteres repetidos consecutivos*/

/*char *strpack(char *s){
    int i, j;
    for(i=j=0; s[i] != '\0'; i++)
        if(s[i] != s[j])
            s[++j] = s[i];
    s[++j] = '\0';
    return s;
}*/

char *strpack(char *s) {
    int i = 1, j = 1; // Começamos do segundo caractere

    while (s[i] != '\0') {
        if (s[i] != s[j - 1]) {
            s[j] = s[i]; // Copia apenas se diferente do anterior
            j++;
        }
        i++;
    }
    s[j] = '\0'; // Finaliza a nova string
    return s;
}

main(){
    char string[50] = "Arrecaddddaccao";
    printf("%s\n", strpack(string));
}

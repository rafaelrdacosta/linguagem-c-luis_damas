#include<stdio.h>

/*Coloca o caractere ch nas posições de
i..j na string s*/

char *strijset(char *s, int i, int j, char ch){
    int count;
    for(count = 0; s[count] != '\0'; count++)
            if(count >= i && count <= j)
                s[count] = ch;
    return s;
}

main(){
    char string[50] = "Anabela";
    char ch = '#';

    printf("%s\n", strijset(string, 9, 20, ch));
}

#include<stdio.h>

/*recebe uma string, coloca a primeira letra de cada
palavra em miúsculas e as restantes em minúsculas.
*/

char *wordupr(char *s){
    int i = 0;
    while(s[i] != '\0'){
        s[0] = toupper(s[0]);
        if(s[i - 1] == ' '){
            s[i] = toupper(s[i]);
        }
        else
            s[i] = tolower(s[i]);
        i++;
    }
    return s;
}

main(){
    char string[50] =  "eRA uma vez";

    printf("%s\n", wordupr(string));
}

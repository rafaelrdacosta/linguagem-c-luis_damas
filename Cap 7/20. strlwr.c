#include<stdio.h>

/*Coloca todos os caracteres da string em minúsculas*/

char tolower(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return ch + 'a' - 'A';
    return ch;
}

char *strlwr(char *str){
    for(int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
    return str;
}

main(){
    char string[50] = "Rafael";

    printf("%s\n", strlwr(string));

}

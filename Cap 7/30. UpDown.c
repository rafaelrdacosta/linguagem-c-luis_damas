#include<stdio.h>


/*Coloca os caracteres da string s alternadamente
em Mai�sculas e min�sculas*/

char *UpDown(char *s){
    for(int i = 0; s[i] != '\0'; i++){
        if(i % 2 == 0) /*se for par*/
            s[i] = toupper(s[i]);
        else /*se for �mpar*/
            s[i] = tolower(s[i]);
    }return s;
}

main(){
    char string[50] = "Alfabeto Grego";

    printf("%s\n", UpDown(string));
}

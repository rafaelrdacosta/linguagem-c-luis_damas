#include<stdio.h>
#include<ctype.h>
#include<string.h>

/*Recebe uma string e coloca toda a primeira metade
em min�sculas e segunda metade em mai�sculas*/

char *Transform(char *s){
    int i, len = strlen(s);
    for(i = 0; i < len; i++){
        if(i < len/2)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }return s;
}

main(){
    char string[50] = "Mafaldas";
    printf("%s\n", Transform(string));
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>

/*Recebe uma string e coloca toda a primeira metade
em minúsculas e segunda metade em maiúsculas*/

char *Transform(char *s);

int main(){
    char string[] = "Bento Costa";
    printf("%s\n", Transform(string));
    return 0;
}

char *Transform(char *s){
   int i, len = strlen(s)/2;
   for(i=0; s[i]!='\0';i++)
        s[i] = (i<len)?tolower(s[i]):toupper(s[i]);
   return s;
}


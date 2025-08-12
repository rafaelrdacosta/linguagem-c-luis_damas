#include<stdio.h>

/*Implemente uma função que cria dinamicamente
uma nova string contendo apenas metade da string s*/

char *Metade(char *s);

int main(){
    char string[] = "Rafael Costa";
    printf("%s\n", Metade(string));
    return 0;
}

char *Metade(char *s){
    char *ptr;
    int i, len = strlen(s)/2;
    ptr = (char *) malloc(len+1);
    if(ptr == NULL)
       return ptr;
    memcpy(ptr, s, len);
    ptr[len] = '\0';
    return ptr;
}

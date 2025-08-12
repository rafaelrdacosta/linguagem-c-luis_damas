#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strdup(char *s){
    char *tmp;
    tmp = (char *) malloc(sizeof(s)+1);

    if(tmp != NULL)
        strcpy(tmp,s);
    return tmp;

}

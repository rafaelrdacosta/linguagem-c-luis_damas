#include<stdio.h>

int strlen(char *s);

main(){
    char string[] = "rafael";
    printf("%d", strlen(string));
}

int strlen(char *s){
    if(*s == '\0')
        return 0;
    else
        return 1 + strlen(s + 1);
}

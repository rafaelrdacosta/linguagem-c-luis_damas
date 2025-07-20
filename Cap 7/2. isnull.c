#include<stdio.h>


int isnull(char *s){
    return (s[0] == '\0');
}

main(){
    char Nome[] = "";
    printf("%d", isnull(Nome));
}

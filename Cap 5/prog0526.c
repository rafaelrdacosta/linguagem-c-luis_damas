#include<stdio.h>

int isspace(char c){
    return c == ' ' || c == '\t';
}

main(){
    char ch;
    printf("Digite um caractere: ");
    scanf("%c", &ch);

    printf("%d", isspace(ch));
}

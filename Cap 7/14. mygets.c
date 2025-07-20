#include<stdio.h>
#include<ctype.h>

char *mygets(char *s){
    int ch, i = 0;
    while((ch=getchar()) != '\n')
        s[i++] = ch;
    s[i] = '\0';
    return s;
}

main(){
    char string[50];

    printf("Digite uma string: ");
    mygets(string);

    printf("%s\n", string);
}

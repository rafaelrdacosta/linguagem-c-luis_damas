#include<stdio.h>

int strlen(char *s);

main(){
    char s[100];
    char *ptr = s; /*aponta para o primeiro caractere de s*/

    printf("Introduza uma string: ");
    gets(s);

    printf("%d\n", strlen(s));
}

int strlen(char *s){
    char *ptr = s; /*guarda o endere�o inicial*/

    while(*s != '\0') /*enquanto n�o chegar ao final da string*/
        s++;

    return (int) (s - ptr); /*retorna a diferen�a entre o endere�o final e incial*/
}

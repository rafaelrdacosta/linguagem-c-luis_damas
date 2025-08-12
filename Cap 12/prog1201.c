#include<stdio.h>
#include<string.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    char s[200], outra[200];

    printf("Qual a sua string? ");
    gets(s);

    /*Colocar na string outra uma cópia da string s*/
    strcpy(outra, s);

    printf("String original: %s\nCópia: %s\n", s, outra);
}

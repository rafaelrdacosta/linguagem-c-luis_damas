#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char ch;

    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    printf("O caractere '%c' tem o ASCII nº %d\n", ch, ch);
}

#include<stdio.h>
#include<locale.h>

int x_toupper(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch + 'A' - 'a';
    else
        return ch;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char ch;

    printf("Digite uma letra min�scula: ");
    scanf(" %c", &ch);

    printf("Mai�scula - %c\n", x_toupper(ch));
}

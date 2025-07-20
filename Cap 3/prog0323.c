#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano;

    printf("\nDigite o ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
        printf("\nAno bissexto.\n");
    else
        printf("\nAno não é bissexto.\n");

    return 0;
}

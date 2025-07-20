#include<stdio.h>
#include<locale.h>

int x_isdigit(char ch){
    return (ch >= '0' && ch <= '9');
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char ch;
    int opcao;

    do{
        printf("Digite um caracter: ");
        scanf(" %c", &ch);
        if(!x_isdigit(ch))
            printf("Não é dígito!\n");
        else
            printf("É dígito!\n");

        printf("1 - Continuar\n2 - Fechar o programa\n");
        scanf("%d", &opcao);
    }while(opcao == 1);
}

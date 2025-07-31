#include<stdio.h>

/*Implemente a fun��o Ler_Inteiro que devolve o inteiro lido.
O par�metro prompt cont�m a mensagem que solicita o inteiro
ao usu�rio.
Dever� receber apenas inteiros superiores ou iguais a zero*/

void Ler_Inteiro(char *prompt, int *ptr_valor);

int main(){
    int idade, total;
    Ler_Inteiro("Introduza a idade: ", &idade);
    Ler_Inteiro("Qual total a depositar: ", &total);
    printf("Idade: %d\nTotal: %d\n", idade, total);
}

void Ler_Inteiro(char *prompt, int *ptr_valor){
    do{
        printf(prompt);
        scanf("%d", ptr_valor);
    }while(*ptr_valor<0);
}

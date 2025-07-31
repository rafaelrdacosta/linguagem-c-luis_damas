#include<stdio.h>

/*Implemente a função Ler_Inteiro que devolve o inteiro lido.
O parâmetro prompt contém a mensagem que solicita o inteiro
ao usuário.
Deverá receber apenas inteiros superiores ou iguais a zero*/

int Ler_Inteiro(char *prompt);

int main(){
    int idade, total;
    idade = Ler_Inteiro("Introduza a idade: ");
    total = Ler_Inteiro("Qual total a depositar: ");
}

int Ler_Inteiro(char *prompt){
    int n;
    do{
        printf(prompt);
        scanf("%d", &n);
    }while(n<0);
    return n;
}

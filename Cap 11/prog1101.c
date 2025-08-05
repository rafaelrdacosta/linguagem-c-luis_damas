#include<stdio.h>
#include<locale.h>

/*Escreva uma função que permita escrever na tela
os valores existentes em uma estrutura recebida
como argumento*/

typedef struct {int Dia, Mes, Ano;} DATA;

typedef struct pessoa{
    char Nome[100];
    int Idade;
    float salario;
    DATA Nasc;
}PESSOA;

void Mostrar(struct pessoa x);

int main(){
    setlocale(LC_ALL, "Portugese");
    PESSOA p = {"Rafael", 44, 14500, {6, 12, 1980}};
    Mostrar(p);

    return 0;
}

void Mostrar(struct pessoa x){
    printf("Nome: %s\n", x.Nome);
    printf("Idade: %d\n", x.Idade);
    printf("Salário: %.2f\n", x.salario);
    printf("Data nascimento: %d/%d/%d\n", x.Nasc.Dia, x.Nasc.Mes, x.Nasc.Ano);

}

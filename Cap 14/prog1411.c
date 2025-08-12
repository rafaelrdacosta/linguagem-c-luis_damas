#include<stdio.h>
#include<locale.h>

/*Sexo(0: Mulher, 1: Homem
Estado Civil(0: Solteiro, 1: Casado, 2: Viúvo, 3: Divorciado)*/
struct Pessoa{
    char Nome[30];
    int Idade;
    unsigned Sexo: 1; /*Campo de bits - 1 Bit (0 ou 1)
    */
    unsigned Est_Civil: 2; /*Campo de bits - 2 Bits(00, 01, 10, 11)*/
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct Pessoa p;
    /*Carregar a estrutura com valores*/
    strcpy(p.Nome, "Samad o Terrível");
    p.Idade = 32;
    p.Sexo = 1; /*Masculino*/
    p.Est_Civil = 3; /*Divorciado*/

    /*Mostrar os valores*/
    printf("Nome: %s\n", p.Nome);
    printf("Idade: %d\n", p.Idade);
    printf("Sexo: %s\n", p.Sexo==1?"Masculino":"Feminino");
    printf("Estado Civil: ");
    switch(p.Est_Civil){
        case 0: puts("Solteiro"); break;
        case 1: puts("Casado"); break;
        case 2: puts("Viúvo"); break;
        case 3: puts("Divorciado"); break;
    }
    return 0;
}

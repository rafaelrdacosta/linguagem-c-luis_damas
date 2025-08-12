#include<stdio.h>
#include<locale.h>

typedef struct{
    char Nome[100];
    int Idade;
    float Salario;
    char Status;
}PESSOA;

void Ler_Pessoa(PESSOA *p);
void Mostrar_Pessoa(PESSOA p);

int main(){
    setlocale(LC_ALL, "Portuguese");
    PESSOA p;
    Ler_Pessoa(&p);
    Mostrar_Pessoa(p);

    return 0;
}


void Ler_Pessoa(PESSOA *p){
    printf("Digite seu nome completo: "); gets(p->Nome);
    printf("Digite sua idade: "); scanf("%d", &p->Idade);
    printf("Informe seu salário: "); scanf("%f", &p->Salario);
    p->Status = ' ';
    fflush(stdin);
}

void Mostrar_Pessoa(PESSOA p){
    printf("\n\nNome: %s\n", p.Nome);
    printf("Idade: %d\n", p.Idade);
    printf("Salário: R$ %.2f\n\n", p.Salario);
}

#include<stdio.h>
#include<locale.h>

typedef struct{
    int Dia, Mes, Ano;} DATA;

typedef struct pessoa{
    char Nome[100];
    int Idade;
    float Salario;
    DATA Nasc;
}PESSOA;

void Ler(PESSOA *ptr);
void Mostrar(struct pessoa x);

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct pessoa p = {"Carlos", 23, 12347.67, {23, 5, 1954}};
    Mostrar(p);
    Ler(&p);
    puts("\n");
    Mostrar(p);
    return 0;
}


void Ler(PESSOA *ptr){
    printf("Qual o Nome: "); gets((*ptr).Nome);
    printf("Qual a Idade: "); scanf("%d", &(*ptr).Idade);
    printf("Qual o Salário: "); scanf("%f", &(*ptr).Salario);
    printf("Data de Nascimento: "); scanf("%d %d %d", &(*ptr).Nasc.Dia, &(*ptr).Nasc.Mes, &(*ptr).Nasc.Ano);

}

void Mostrar(struct pessoa x){
    printf("Nome: %s\n", x.Nome);
    printf("Idade: %d\n", x.Idade);
    printf("Salário: %.2f\n", x.Salario);
    printf("Data Nascimento: %d/%d/%d\n", x.Nasc.Dia, x.Nasc.Mes, x.Nasc.Ano);
}

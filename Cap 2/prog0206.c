#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    short int idade;
    float valor;
    long int n_conta;

    printf("Qual a sua idade? ");
    scanf("%hd", &idade);

    printf("Qual valor � ser depositado? ");
    scanf("%f", &valor);

    printf("Qual o n�mero da conta? ");
    scanf("%ld", &n_conta);

    printf("Uma pessoa de %hd anos depositou R$ %.2f na conta %ld\n", idade, valor, n_conta);
}

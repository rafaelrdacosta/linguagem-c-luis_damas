#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, imposto = 0.0;
    char sexo;

    printf("\nInforme o seu salário: ");
    scanf("%f", &salario);

    printf("\nInforme o sexo [M/m ou F/f]: ");
    scanf(" %c", &sexo);

    switch(sexo){
        case 'm':
        case 'M':
            imposto = 0.15*salario;
            break;
        case 'f':
        case 'F':
            imposto = 0.1*salario;
            break;
        default:
            printf("\nSexo inválido!\n");
    }
    printf("\nImposto: %.2f\n", imposto);
    return 0;
}

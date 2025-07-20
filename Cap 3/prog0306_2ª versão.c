#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("\nInforme o valor do salário: ");
    scanf("%f", &salario);

    if(salario <= 0)
        printf("\nSalário inválido!\n");
    else
        if(salario > 1000)
            printf("\nImposto a pagar: %.2f\n", 0.1 * salario);
        else
            printf("\nImposto a pagar: %.2f\n", 0.05 * salario);

}

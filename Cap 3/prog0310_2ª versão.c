#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("\nQual é o seu salário: ");
    scanf("%f", &salario);

    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;

    printf("\nSalário reajustado: R$ %.2f\n", salario);

}

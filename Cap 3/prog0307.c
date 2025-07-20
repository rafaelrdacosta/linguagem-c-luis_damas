#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto, salarioLiquido, imposto;

    printf("\nInforme o valor do Salário Bruto: ");
    scanf("%f", &salarioBruto);

    if(salarioBruto <= 0)
        printf("\nSalário inválido!\n");
    else{
        if(salarioBruto < 1000){
            imposto = 0.05 * salarioBruto;
        }else if(salarioBruto < 5000){
            imposto = 0.11 * salarioBruto;
        }else{
            imposto = 0.35 * salarioBruto;
        }
    }

    printf("\nSalário Bruto R$ %.2f\n", salarioBruto);
    printf("Salário Líquido R$ %.2f\n", salarioBruto - imposto);
    printf("Imposto a pagar R$ %.2f\n", imposto);
}

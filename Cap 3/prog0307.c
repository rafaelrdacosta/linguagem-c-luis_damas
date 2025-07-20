#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto, salarioLiquido, imposto;

    printf("\nInforme o valor do Sal�rio Bruto: ");
    scanf("%f", &salarioBruto);

    if(salarioBruto <= 0)
        printf("\nSal�rio inv�lido!\n");
    else{
        if(salarioBruto < 1000){
            imposto = 0.05 * salarioBruto;
        }else if(salarioBruto < 5000){
            imposto = 0.11 * salarioBruto;
        }else{
            imposto = 0.35 * salarioBruto;
        }
    }

    printf("\nSal�rio Bruto R$ %.2f\n", salarioBruto);
    printf("Sal�rio L�quido R$ %.2f\n", salarioBruto - imposto);
    printf("Imposto a pagar R$ %.2f\n", imposto);
}

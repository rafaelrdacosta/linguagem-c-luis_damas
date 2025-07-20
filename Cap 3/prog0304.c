#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float salario;

    printf("\nInforme seu Salário: $ ");
    scanf("%f", &salario);

    if(salario < 100000)
        salario += 1000;
    printf("\nSalário final: $ %.2f\n", salario);

}

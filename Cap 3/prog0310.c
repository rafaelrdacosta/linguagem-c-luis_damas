#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("\nQual � o seu sal�rio: ");
    scanf("%f", &salario);

    if(salario > 1000)
        salario = salario * 1.05;
    else
        salario = salario * 1.07;

    printf("\nSal�rio reajustado: R$ %.2f\n", salario);

}

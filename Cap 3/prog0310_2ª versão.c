#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("\nQual � o seu sal�rio: ");
    scanf("%f", &salario);

    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;

    printf("\nSal�rio reajustado: R$ %.2f\n", salario);

}

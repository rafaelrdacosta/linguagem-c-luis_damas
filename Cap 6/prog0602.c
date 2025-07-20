#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float salario[13], total = 0;
    int i;

    for(i = 1; i <= 12; i++){
        printf("Informe o salário do %dº mês: ", i);
        scanf("%f", &salario[i]);
        total += salario[i];
    }

    printf("\nMês   Valor\n");
    for(i = 1; i <= 12; i++){
        printf("%3.
               d  %9.2f\n", i, salario[i]);
    }
    printf("\nTotal Anual:   %9.2f\n", total);
}

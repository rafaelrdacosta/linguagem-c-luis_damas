#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float salario[12], total = 0;
    int i;

    for(i = 0; i < 12; i++){
        printf("Informe o sal�rio do %d� m�s: ", i+1);
        scanf("%f", &salario[i]);
        total += salario[i];
    }

    printf("\nM�s   Valor\n");
    for(i = 0; i < 12; i++){
        printf("%.3d  %9.2f\n", i + 1, salario[i]);
    }
    printf("\nTotal Anual:   %9.2f\n", total);
}

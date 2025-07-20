#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;
    char estadoCivil;

    printf("\nQual é o seu salário: ");
    scanf("%f", &salario);

    printf("\nQual seu estado civil [solteiro: s/S ou casado: c/C]: ");
    scanf(" %c", &estadoCivil);

    if(estadoCivil == 's' || estadoCivil == 'S')
        printf("Imposto: %.2f\n", 0.1*salario);
    else
        if(estadoCivil == 'c' || estadoCivil == 'C')
            printf("Imposto: %.2f\n", 0.09*salario);
        else
            printf("\nEstado civil incorreto!!\n");


}

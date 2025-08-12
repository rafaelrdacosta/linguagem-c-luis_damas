#include <stdio.h>
#include <locale.h>

/*Defina a macro Val_Iva(valor) que deverá retornar o montante de IVA
associado a um valor, sabendo que a taxa a ser aplicada é TAXA_IVA1
se o valor for menor que 10000, caso contrário aplica-se a TAXA_IVA2*/

#define TAXA_IVA1 0.05
#define TAXA_IVA2 0.17

#define Val_Iva(valor) (((valor)<10000)? TAXA_IVA1*(valor) : TAXA_IVA2*(valor))

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valor;

    printf("Qual valor a ser tributado: ");
    scanf("%f", &valor);

    // Usa a macro para calcular o montante do tributo
    printf("Montante tributo: %.2f\n", Val_Iva(valor));

    return 0;
}

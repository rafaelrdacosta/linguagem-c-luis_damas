#include<stdio.h>
#include<locale.h>

/*prog0206 - Escreva um programa que calcule o per�metro e a �rea de uma
circunfer�ncia*/

main(){
    setlocale(LC_ALL,"Portuguese");

    double Pi = 3.1415297, area;
    float raio, perimetro;

    printf("Informe o raio da circunfer�ncia: ");
    scanf("%f", &raio);

    perimetro = 2 * Pi * raio;
    area = Pi * raio * raio;

    printf("O per�metro da circunfer�ncia � igual a %.2f\n", perimetro);
    printf("A �rea da circunfer�ncia � igual a %.2f\n", area);
}



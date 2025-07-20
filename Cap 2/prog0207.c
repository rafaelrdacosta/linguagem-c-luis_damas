#include<stdio.h>
#include<locale.h>

/*prog0206 - Escreva um programa que calcule o perímetro e a área de uma
circunferência*/

main(){
    setlocale(LC_ALL,"Portuguese");

    double Pi = 3.1415297, area;
    float raio, perimetro;

    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);

    perimetro = 2 * Pi * raio;
    area = Pi * raio * raio;

    printf("O perímetro da circunferência é igual a %.2f\n", perimetro);
    printf("A área da circunferência é igual a %.2f\n", area);
}



#include<stdio.h>
#include<locale.h>

/*Escreva um programa que realize a convers�o de toneladas para
kilos e gramas escrevendo o resultado em nota��o tradicional e
em nota��o cient�fica*/

main(){
    setlocale(LC_ALL, "Portuguese");

    float quilos = 1.0E3;
    double gramas = 1.0e6;
    float n_toneladas;

    printf("Quantas toneladas comprou: ");
    scanf("%f", &n_toneladas);

    printf("N� de Quilos = %f = %e\n", quilos*n_toneladas, quilos*n_toneladas);
    printf("N� de gramas = %f = %E\n", gramas*n_toneladas, gramas*n_toneladas);


}

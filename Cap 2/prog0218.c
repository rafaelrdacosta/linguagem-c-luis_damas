#include<stdio.h>
#include<locale.h>

/*Escreva um programa em C que solicite um determinado n�mero de segundos e,
em seguida, indique quantas horas, minutos e segundos esse valor representa.*/

main(){
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    long int n_segundos;

    //Entrada de dados pelo usu�rio
    printf("Digite o valor em segundos: ");
    scanf("%d", &n_segundos);

    int horas = n_segundos / 3600;
    int minutos = (n_segundos % 3600) / 60;
    int segundos = n_segundos % 60;

    printf("%d segundos = %dh / %dmin / %dseg\n", n_segundos, horas, minutos, segundos);
}

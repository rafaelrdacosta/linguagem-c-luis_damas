#include<stdio.h>
#include<locale.h>

int soma(int a, int b){
        return a + b;
    }

int dobro(int a){
    return 2 * a;
}

main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, resultado;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    resultado = soma(num1, num2);

    printf("%d + %d = %d\n", num1, num2, resultado);
    printf("2 * %d = %d e 2 * %d = %d\n", num1, dobro(num1), num2, dobro(num2));



}

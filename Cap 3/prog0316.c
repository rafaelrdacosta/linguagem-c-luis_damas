#include<stdio.h>
#include<locale.h>

/*Má programação*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    char op;

    printf("\nEscreva uma expressão: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch(op){
        case '+':
            printf("\n%d %c %d = %d\n", num1, op, num2, num1 + num2);
            break;
        case '-':
            printf("\n%d %c %d = %d\n", num1, op, num2, num1 - num2);
            break;
        case '*':
        case 'x':
        case 'X':
            printf("\n%d %c %d = %d\n", num1, op, num2, num1 * num2);
            break;
        case '/':
        case '\\':
        case ':':
            printf("\n%d %c %d = %d\n", num1, op, num2, num1 / num2);
            break;


    }
    return 0;
}

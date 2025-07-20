#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    switch(num){
        case 0:
            printf("\n%d é igual a zero.\n", num);
            break;
        default:
            printf("\n%d é diferente de zero.\n",  num);
    }

    return 0;
}

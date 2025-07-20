#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    if(!num) //para ser verdadeiro tem que ser diferente de zero
        printf("\n%d é igual a zero.\n", num);
    else
        printf("\n%d é diferente de zero.\n",  num);

    return 0;
}

#include<stdio.h>
#include<assert.h>
#include<locale.h>

int Quadrado(int x){
    return x*x;
}

int Dobro(int x){
    return 2*x;
}

int Abs(int x){
    return x<0?-x:x;
}

/*Esta função recebe dois parâmetros
    Um ponteiro para uma função que recebe
como parâmetro um inteiro e devolve um inteiro
como resultado.
    Um inteiro a ser formatado pela função
    Depois coloca o resultado da execução de
função(n) entre <<| e |>>*/

void Imprime_Especial(int(*funcao)(int), int n){
    // Garante que o ponteiro para a funcao não é nulo
    assert(funcao!=NULL);
    printf("<<| %d |>>\n", funcao(n));
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int (*f)(int);
    int valor;
    f = NULL; /*Não aponta para função nenhuma*/

    printf("Introduza um número inteiro: ");
    scanf("%d", &valor);

    if(valor < 0)
        f = Abs; // 'f' aponta para a funcao Abs
    else
        if(valor <= 100)
            f = Quadrado; // 'f' aponta para a funcao Quadrado
        else
            f = Dobro; // 'f' aponta para a funcao Dobro

    // Chama a funcao que usa o ponteiro para funcao

    Imprime_Especial(f, valor);
}

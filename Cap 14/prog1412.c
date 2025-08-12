#include<stdio.h>

int Quadrado(int x){
    return x*x;
}

int Dobro(int x){
    return 2*x;
}

int Cubo(int x){
    return Quadrado(x)*x;
}

/*Esta função recebe dois parâmetros
    Um ponteiro para uma função que recebe
como parâmetro um inteiro e devolve um inteiro
como resultado.
    Um inteiro a ser formatado pela função
    Depois coloca o resultado da execução de
função(n) entre <<| e |>>*/

void Imprime_Especial(int(*funcao)(int), int n){
    printf("<<| %d |>>\n", funcao(n));
}

int main(){
    Imprime_Especial(Quadrado, 3);
    Imprime_Especial(Dobro, 3);
    Imprime_Especial(Cubo, 3);
}

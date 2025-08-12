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

/*Esta fun��o recebe dois par�metros
    Um ponteiro para uma fun��o que recebe
como par�metro um inteiro e devolve um inteiro
como resultado.
    Um inteiro a ser formatado pela fun��o
    Depois coloca o resultado da execu��o de
fun��o(n) entre <<| e |>>*/

void Imprime_Especial(int(*funcao)(int), int n){
    printf("<<| %d |>>\n", funcao(n));
}

int main(){
    int (*f)(int);
    f = Quadrado;
    Imprime_Especial(f, 3);

    f = Dobro;
    Imprime_Especial(f, 10);

    f = Cubo;
    Imprime_Especial(f, 5);
    return 0;
}

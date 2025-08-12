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

/*Esta fun��o recebe dois par�metros
    Um ponteiro para uma fun��o que recebe
como par�metro um inteiro e devolve um inteiro
como resultado.
    Um inteiro a ser formatado pela fun��o
    Depois coloca o resultado da execu��o de
fun��o(n) entre <<| e |>>*/

void Imprime_Especial(int(*funcao)(int), int n){
    // Garante que o ponteiro para a funcao n�o � nulo
    assert(funcao!=NULL);
    printf("<<| %d |>>\n", funcao(n));
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int (*f)(int);
    int valor;
    f = NULL; /*N�o aponta para fun��o nenhuma*/

    printf("Introduza um n�mero inteiro: ");
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
